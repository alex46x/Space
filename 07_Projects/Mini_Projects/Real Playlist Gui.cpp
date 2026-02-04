// Real GUI Playlist Project - Fully Functional with Qt (C++)
// Circular Playlist GUI with Shuffle, Play Next, Save/Load Features

#include <QApplication>
#include <QFile>
#include <QFileDialog>
#include <QInputDialog>
#include <QListWidget>
#include <QMainWindow>
#include <QMessageBox>
#include <QPushButton>
#include <QString>
#include <QTextStream>
#include <QVBoxLayout>
#include <cstdlib>
#include <ctime>

class PlaylistApp : public QMainWindow
{
    Q_OBJECT

public:
    PlaylistApp(QWidget *parent = nullptr);

private slots:
    void addSong();
    void playNext();
    void shufflePlay();
    void savePlaylist();
    void loadPlaylist();

private:
    QListWidget *playlistView;
    QStringList playlist;
    int currentIndex = 0;
};

PlaylistApp::PlaylistApp(QWidget *parent) : QMainWindow(parent)
{
    QWidget *central = new QWidget(this);
    QVBoxLayout *layout = new QVBoxLayout(central);

    playlistView = new QListWidget(this);
    layout->addWidget(playlistView);

    QPushButton *addBtn = new QPushButton("Add Song");
    QPushButton *playBtn = new QPushButton("Play Next");
    QPushButton *shuffleBtn = new QPushButton("Shuffle Play");
    QPushButton *saveBtn = new QPushButton("Save Playlist");
    QPushButton *loadBtn = new QPushButton("Load Playlist");

    layout->addWidget(addBtn);
    layout->addWidget(playBtn);
    layout->addWidget(shuffleBtn);
    layout->addWidget(saveBtn);
    layout->addWidget(loadBtn);

    connect(addBtn, &QPushButton::clicked, this, &PlaylistApp::addSong);
    connect(playBtn, &QPushButton::clicked, this, &PlaylistApp::playNext);
    connect(shuffleBtn, &QPushButton::clicked, this, &PlaylistApp::shufflePlay);
    connect(saveBtn, &QPushButton::clicked, this, &PlaylistApp::savePlaylist);
    connect(loadBtn, &QPushButton::clicked, this, &PlaylistApp::loadPlaylist);

    setCentralWidget(central);
    srand(static_cast<unsigned>(time(nullptr)));
}

void PlaylistApp::addSong()
{
    bool ok;
    QString title = QInputDialog::getText(this, "Add Song", "Song Title:", QLineEdit::Normal, "", &ok);
    if (ok && !title.isEmpty())
    {
        playlist.append(title);
        playlistView->addItem(title);
    }
}

void PlaylistApp::playNext()
{
    if (playlist.isEmpty())
    {
        QMessageBox::information(this, "Info", "Playlist is empty!");
        return;
    }
    QString current = playlist.at(currentIndex);
    QMessageBox::information(this, "Now Playing", "♪ " + current);
    currentIndex = (currentIndex + 1) % playlist.size();
}

void PlaylistApp::shufflePlay()
{
    if (playlist.isEmpty())
    {
        QMessageBox::information(this, "Info", "Playlist is empty!");
        return;
    }
    int index = rand() % playlist.size();
    QString song = playlist.at(index);
    QMessageBox::information(this, "Shuffle Play", "🔀 ♪ " + song);
}

void PlaylistApp::savePlaylist()
{
    QString filename = QFileDialog::getSaveFileName(this, "Save Playlist", "playlist.txt", "Text Files (*.txt)");
    if (filename.isEmpty())
        return;

    QFile file(filename);
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Failed to save file!");
        return;
    }

    QTextStream out(&file);
    for (const QString &song : playlist)
        out << song << "\n";
    file.close();
    QMessageBox::information(this, "Saved", "Playlist saved successfully!");
}

void PlaylistApp::loadPlaylist()
{
    QString filename = QFileDialog::getOpenFileName(this, "Load Playlist", "", "Text Files (*.txt)");
    if (filename.isEmpty())
        return;

    QFile file(filename);
    if (!file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QMessageBox::warning(this, "Error", "Failed to load file!");
        return;
    }

    playlist.clear();
    playlistView->clear();

    QTextStream in(&file);
    while (!in.atEnd())
    {
        QString line = in.readLine();
        if (!line.isEmpty())
        {
            playlist.append(line);
            playlistView->addItem(line);
        }
    }
    file.close();
    QMessageBox::information(this, "Loaded", "Playlist loaded successfully!");
}

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    PlaylistApp window;
    window.setWindowTitle("🎵 Circular Playlist Player");
    window.resize(300, 400);
    window.show();
    return app.exec();
}

#include "main.moc"
