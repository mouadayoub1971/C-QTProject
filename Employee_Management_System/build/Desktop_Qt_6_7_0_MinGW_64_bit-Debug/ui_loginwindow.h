/********************************************************************************
** Form generated from reading UI file 'loginwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINWINDOW_H
#define UI_LOGINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *login_window;
    QLabel *username_label;
    QLabel *password_label;
    QCheckBox *checkBox;
    QPushButton *employee_login_btn;
    QLineEdit *username_input;
    QLineEdit *password_input;
    QPushButton *admin_login_btn;
    QLabel *forgot_label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1081, 742);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        login_window = new QLabel(centralwidget);
        login_window->setObjectName("login_window");
        login_window->setGeometry(QRect(-14, 0, 111, 20));
        login_window->setPixmap(QPixmap(QString::fromUtf8("../Downloads/Login Window (1).png")));
        username_label = new QLabel(centralwidget);
        username_label->setObjectName("username_label");
        username_label->setGeometry(QRect(240, 240, 81, 16));
        username_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-weight: 500;\n"
"font-size: 15px;\n"
""));
        password_label = new QLabel(centralwidget);
        password_label->setObjectName("password_label");
        password_label->setGeometry(QRect(240, 300, 81, 16));
        password_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-weight: 500;\n"
"font-size: 15px;\n"
""));
        checkBox = new QCheckBox(centralwidget);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(380, 360, 121, 22));
        checkBox->setStyleSheet(QString::fromUtf8("color: white;\n"
"border: transparent;"));
        employee_login_btn = new QPushButton(centralwidget);
        employee_login_btn->setObjectName("employee_login_btn");
        employee_login_btn->setGeometry(QRect(380, 410, 341, 61));
        employee_login_btn->setCursor(QCursor(Qt::PointingHandCursor));
        employee_login_btn->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-weight: 1000;\n"
"font-size: 20px;\n"
"background-color: rgb(166, 170, 236);\n"
"border: none;\n"
""));
        username_input = new QLineEdit(centralwidget);
        username_input->setObjectName("username_input");
        username_input->setGeometry(QRect(380, 220, 341, 51));
        username_input->setInputMethodHints(Qt::ImhNone);
        username_input->setEchoMode(QLineEdit::Normal);
        password_input = new QLineEdit(centralwidget);
        password_input->setObjectName("password_input");
        password_input->setGeometry(QRect(380, 290, 341, 51));
        password_input->setEchoMode(QLineEdit::Password);
        admin_login_btn = new QPushButton(centralwidget);
        admin_login_btn->setObjectName("admin_login_btn");
        admin_login_btn->setGeometry(QRect(380, 500, 341, 61));
        admin_login_btn->setCursor(QCursor(Qt::PointingHandCursor));
        admin_login_btn->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-weight: 1000;\n"
"font-size: 20px;\n"
"background-color: rgb(170, 51, 45);\n"
" border: none;"));
        forgot_label = new QLabel(centralwidget);
        forgot_label->setObjectName("forgot_label");
        forgot_label->setGeometry(QRect(460, 600, 171, 31));
        forgot_label->setCursor(QCursor(Qt::PointingHandCursor));
        forgot_label->setStyleSheet(QString::fromUtf8("color: white;\n"
"font-weight: 1000;\n"
"font-size: 15px;\n"
"border: none;"));
        MainWindow->setCentralWidget(centralwidget);
        login_window->raise();
        username_label->raise();
        password_label->raise();
        checkBox->raise();
        username_input->raise();
        password_input->raise();
        employee_login_btn->raise();
        admin_login_btn->raise();
        forgot_label->raise();

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        login_window->setText(QString());
        username_label->setText(QCoreApplication::translate("MainWindow", "Username:", nullptr));
        password_label->setText(QCoreApplication::translate("MainWindow", "Password: ", nullptr));
        checkBox->setText(QCoreApplication::translate("MainWindow", "Show password", nullptr));
        employee_login_btn->setText(QCoreApplication::translate("MainWindow", "Employee Login", nullptr));
        username_input->setText(QString());
        password_input->setText(QString());
        admin_login_btn->setText(QCoreApplication::translate("MainWindow", "Admin Login", nullptr));
        forgot_label->setText(QCoreApplication::translate("MainWindow", "Forgot your password?", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINWINDOW_H
