/********************************************************************************
** Form generated from reading UI file 'updateattendance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATEATTENDANCE_H
#define UI_UPDATEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_UpdateAttendance
{
public:
    QLabel *label;
    QPushButton *pushButton;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QTextEdit *textEdit;
    QLabel *label_5;
    QLineEdit *lineEdit_3;
    QPushButton *pushButton_2;

    void setupUi(QDialog *UpdateAttendance)
    {
        if (UpdateAttendance->objectName().isEmpty())
            UpdateAttendance->setObjectName("UpdateAttendance");
        UpdateAttendance->resize(802, 444);
        UpdateAttendance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(UpdateAttendance);
        label->setObjectName("label");
        label->setGeometry(QRect(530, 60, 91, 21));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        pushButton = new QPushButton(UpdateAttendance);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(60, 350, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));
        tableView = new QTableView(UpdateAttendance);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(380, 110, 401, 241));
        tableView->setStyleSheet(QString::fromUtf8("border : 2px solid  rgb(127, 130, 181); "));
        label_2 = new QLabel(UpdateAttendance);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 49, 16));
        label_2->setStyleSheet(QString::fromUtf8("color : balck;"));
        label_3 = new QLabel(UpdateAttendance);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(20, 130, 101, 16));
        label_3->setStyleSheet(QString::fromUtf8("color : balck;"));
        label_4 = new QLabel(UpdateAttendance);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(20, 200, 49, 16));
        label_4->setStyleSheet(QString::fromUtf8("color : balck;"));
        lineEdit = new QLineEdit(UpdateAttendance);
        lineEdit->setObjectName("lineEdit");
        lineEdit->setGeometry(QRect(170, 80, 113, 24));
        lineEdit->setStyleSheet(QString::fromUtf8("color : balck;\n"
"border : 2px solid  rgb(127, 130, 181); "));
        lineEdit_2 = new QLineEdit(UpdateAttendance);
        lineEdit_2->setObjectName("lineEdit_2");
        lineEdit_2->setGeometry(QRect(170, 120, 113, 24));
        lineEdit_2->setStyleSheet(QString::fromUtf8("color : balck;\n"
"border : 2px solid  rgb(127, 130, 181); "));
        textEdit = new QTextEdit(UpdateAttendance);
        textEdit->setObjectName("textEdit");
        textEdit->setGeometry(QRect(80, 190, 271, 131));
        textEdit->setStyleSheet(QString::fromUtf8("color : balck;\n"
"border : 2px solid  rgb(127, 130, 181); "));
        label_5 = new QLabel(UpdateAttendance);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(20, 50, 49, 16));
        label_5->setStyleSheet(QString::fromUtf8("color : balck;"));
        lineEdit_3 = new QLineEdit(UpdateAttendance);
        lineEdit_3->setObjectName("lineEdit_3");
        lineEdit_3->setGeometry(QRect(170, 50, 113, 24));
        lineEdit_3->setStyleSheet(QString::fromUtf8("color : balck;\n"
"border : 2px solid  rgb(127, 130, 181); "));
        pushButton_2 = new QPushButton(UpdateAttendance);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(220, 350, 101, 31));
        pushButton_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));

        retranslateUi(UpdateAttendance);

        QMetaObject::connectSlotsByName(UpdateAttendance);
    } // setupUi

    void retranslateUi(QDialog *UpdateAttendance)
    {
        UpdateAttendance->setWindowTitle(QCoreApplication::translate("UpdateAttendance", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("UpdateAttendance", "Pending leaves: ", nullptr));
        pushButton->setText(QCoreApplication::translate("UpdateAttendance", "aprove", nullptr));
        label_2->setText(QCoreApplication::translate("UpdateAttendance", "id_leave", nullptr));
        label_3->setText(QCoreApplication::translate("UpdateAttendance", "date :", nullptr));
        label_4->setText(QCoreApplication::translate("UpdateAttendance", "reason :", nullptr));
        label_5->setText(QCoreApplication::translate("UpdateAttendance", "name", nullptr));
        pushButton_2->setText(QCoreApplication::translate("UpdateAttendance", "reject", nullptr));
    } // retranslateUi

};

namespace Ui {
    class UpdateAttendance: public Ui_UpdateAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATEATTENDANCE_H
