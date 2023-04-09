#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    // Create a window and set its size and title
    QWidget window;
    window.setGeometry(100, 100, 400, 400);
    window.setWindowTitle("Misty Town");

    // Add a label to display the title
    QLabel *titleLabel = new QLabel("Misty Town");
    titleLabel->setAlignment(Qt::AlignCenter);
    titleLabel->setStyleSheet("font-size: 32px; font-weight: bold;");
    titleLabel->setGeometry(50, 50, 300, 100);
    titleLabel->setParent(&window);

    // Add a button to start the game
    QPushButton *startButton = new QPushButton("Start Game");
    startButton->setGeometry(100, 200, 200, 50);
    startButton->setParent(&window);

    // Show the window and start the event loop
    window.show();
    return app.exec();
}
