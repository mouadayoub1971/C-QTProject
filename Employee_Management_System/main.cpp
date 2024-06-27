#include <QApplication>
#include "loginwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set the application icon
    QIcon icon("C:/Users/mouad/Desktop/QT_new_project-main/app.jpeg");
    a.setWindowIcon(icon);

    LoginWindow w;
    w.setWindowTitle("Login");
    w.show();

    return a.exec();
}
