/********************************************************************************
** Form generated from reading UI file 'manageattendance.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGEATTENDANCE_H
#define UI_MANAGEATTENDANCE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_ManageAttendance
{
public:
    QLabel *label;
    QSpinBox *spinBox;
    QPushButton *pushButton;

    void setupUi(QDialog *ManageAttendance)
    {
        if (ManageAttendance->objectName().isEmpty())
            ManageAttendance->setObjectName("ManageAttendance");
        ManageAttendance->resize(330, 112);
        ManageAttendance->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(ManageAttendance);
        label->setObjectName("label");
        label->setGeometry(QRect(50, 10, 141, 31));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        spinBox = new QSpinBox(ManageAttendance);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(200, 10, 51, 31));
        pushButton = new QPushButton(ManageAttendance);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(110, 70, 101, 31));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));

        retranslateUi(ManageAttendance);

        QMetaObject::connectSlotsByName(ManageAttendance);
    } // setupUi

    void retranslateUi(QDialog *ManageAttendance)
    {
        ManageAttendance->setWindowTitle(QCoreApplication::translate("ManageAttendance", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("ManageAttendance", "Enter employee ID: ", nullptr));
        pushButton->setText(QCoreApplication::translate("ManageAttendance", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ManageAttendance: public Ui_ManageAttendance {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGEATTENDANCE_H
