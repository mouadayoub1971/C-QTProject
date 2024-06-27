/********************************************************************************
** Form generated from reading UI file 'removeemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REMOVEEMPLOYEE_H
#define UI_REMOVEEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_RemoveEmployee
{
public:
    QLabel *label;
    QPushButton *done_btn;
    QSpinBox *emp_id_spinbox;

    void setupUi(QDialog *RemoveEmployee)
    {
        if (RemoveEmployee->objectName().isEmpty())
            RemoveEmployee->setObjectName("RemoveEmployee");
        RemoveEmployee->resize(282, 127);
        RemoveEmployee->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(RemoveEmployee);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 121, 21));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        done_btn = new QPushButton(RemoveEmployee);
        done_btn->setObjectName("done_btn");
        done_btn->setGeometry(QRect(100, 80, 81, 31));
        done_btn->setCursor(QCursor(Qt::PointingHandCursor));
        done_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));
        emp_id_spinbox = new QSpinBox(RemoveEmployee);
        emp_id_spinbox->setObjectName("emp_id_spinbox");
        emp_id_spinbox->setGeometry(QRect(170, 30, 61, 31));
        emp_id_spinbox->setStyleSheet(QString::fromUtf8("color:black;"));

        retranslateUi(RemoveEmployee);

        QMetaObject::connectSlotsByName(RemoveEmployee);
    } // setupUi

    void retranslateUi(QDialog *RemoveEmployee)
    {
        RemoveEmployee->setWindowTitle(QCoreApplication::translate("RemoveEmployee", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("RemoveEmployee", "Enter employee ID: ", nullptr));
        done_btn->setText(QCoreApplication::translate("RemoveEmployee", "Done", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RemoveEmployee: public Ui_RemoveEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REMOVEEMPLOYEE_H
