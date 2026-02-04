#include <ctime>
#include <iostream>
#include <string>
#include <vector>
using namespace std;

class Spy; // Forward declaration

// ================= SecretBox Class =================
class SecretBox
{
private:
    int secretCode;
    string location;
    int accessLevel; // 1 = Low, 2 = Medium, 3 = High

    friend class Spy; // Friend declaration

public:
    SecretBox(int code, string loc, int level)
        : secretCode(code), location(loc), accessLevel(level) {}

    void displayPublicInfo()
    {
        cout << "📦 Location: " << location
             << " | Required Access Level: " << accessLevel << endl;
    }
};

// ================= Spy Class =================
class Spy
{
private:
    string name;
    int clearanceLevel; // 1-3
    vector<string> missionLog;

    string getTimeStamp()
    {
        time_t now = time(0);
        char *dt = ctime(&now);
        string ts(dt);
        ts.pop_back(); // Remove newline
        return ts;
    }

public:
    Spy(string n, int level) : name(n), clearanceLevel(level) {}

    void hack(SecretBox &box)
    {
        cout << "🕵️ Spy " << name << " attempting to access box..." << endl;

        if (clearanceLevel >= box.accessLevel)
        {
            cout << "✅ Access Granted!" << endl;
            cout << "🔓 Secret Code: " << box.secretCode << endl;
            cout << "📍 Location: " << box.location << endl;

            missionLog.push_back("Accessed " + box.location + " at " + getTimeStamp());
        }
        else
        {
            cout << "❌ Access Denied! Insufficient clearance level." << endl;
            missionLog.push_back("FAILED access to " + box.location + " at " + getTimeStamp());
        }
        cout << "-------------------------------------------" << endl;
    }

    void changeCode(SecretBox &box, int newCode)
    {
        if (clearanceLevel == 3)
        {
            box.secretCode = newCode;
            cout << "🔄 Code for " << box.location << " changed to: " << newCode << endl;
            missionLog.push_back("Changed code for " + box.location + " at " + getTimeStamp());
        }
        else
        {
            cout << "❌ Permission Denied! Only level 3 spies can change codes." << endl;
        }
    }

    void showMissionLog()
    {
        cout << "\n📜 Mission Log for Spy " << name << ":\n";
        for (string entry : missionLog)
        {
            cout << " - " << entry << endl;
        }
    }
};

// ================= Main =================
int main()
{
    // Create Secret Boxes
    vector<SecretBox> boxes = {
        SecretBox(11111, "London HQ", 1),
        SecretBox(22222, "Berlin Safehouse", 2),
        SecretBox(33333, "Moscow Vault", 3)};

    // Create Spies
    Spy spy1("Bond", 3);
    Spy spy2("Ethan", 2);
    Spy spy3("Natasha", 1);

    // Display public info
    cout << "===== Public Box Info =====\n";
    for (auto &b : boxes)
    {
        b.displayPublicInfo();
    }
    cout << "===========================\n\n";

    // Spies trying to hack boxes
    spy1.hack(boxes[0]);
    spy1.hack(boxes[2]);
    spy2.hack(boxes[1]);
    spy2.hack(boxes[2]);
    spy3.hack(boxes[0]);

    // Changing codes
    spy1.changeCode(boxes[2], 99999);
    spy2.changeCode(boxes[0], 55555);

    // Show mission logs
    spy1.showMissionLog();
    spy2.showMissionLog();
    spy3.showMissionLog();

    return 0;
}
