/********************************************************************************
** Form generated from reading UI file 'assigntask.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ASSIGNTASK_H
#define UI_ASSIGNTASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AssignTask
{
public:
    QLabel *label;
    QSpinBox *emp_id_spinbox;
    QPushButton *done_btn;
    QLabel *label_2;
    QLineEdit *task_lineedit;

    void setupUi(QDialog *AssignTask)
    {
        if (AssignTask->objectName().isEmpty())
            AssignTask->setObjectName("AssignTask");
        AssignTask->resize(516, 191);
        AssignTask->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        label = new QLabel(AssignTask);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 30, 121, 21));
        label->setStyleSheet(QString::fromUtf8("color: black;"));
        emp_id_spinbox = new QSpinBox(AssignTask);
        emp_id_spinbox->setObjectName("emp_id_spinbox");
        emp_id_spinbox->setGeometry(QRect(170, 30, 61, 31));
        done_btn = new QPushButton(AssignTask);
        done_btn->setObjectName("done_btn");
        done_btn->setGeometry(QRect(220, 140, 81, 31));
        done_btn->setCursor(QCursor(Qt::PointingHandCursor));
        done_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));
        label_2 = new QLabel(AssignTask);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(20, 80, 81, 21));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        task_lineedit = new QLineEdit(AssignTask);
        task_lineedit->setObjectName("task_lineedit");
        task_lineedit->setGeometry(QRect(170, 80, 331, 31));

        retranslateUi(AssignTask);

        QMetaObject::connectSlotsByName(AssignTask);
    } // setupUi

    void retranslateUi(QDialog *AssignTask)
    {
        AssignTask->setWindowTitle(QCoreApplication::translate("AssignTask", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("AssignTask", "Enter employee ID: ", nullptr));
        done_btn->setText(QCoreApplication::translate("AssignTask", "Done", nullptr));
        label_2->setText(QCoreApplication::translate("AssignTask", "Enter task:  ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AssignTask: public Ui_AssignTask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ASSIGNTASK_H
