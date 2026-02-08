#include <bits/stdc++.h>
#include <iostream>
using namespace std;

#define PI 3.1416
#define MAX 180

int main()
{
    int angle = 0;
    float x, y;
    cout << "Angle    Cos\n\n";
    while (angle <= MAX)
    {
        x = (PI / MAX) * angle;
        y = cos(x);
        cout << angle << "  " << y << setprecision(4)<< "\n";
        angle += 10;
    }

    return 0;
}