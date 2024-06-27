/********************************************************************************
** Form generated from reading UI file 'newemployee.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWEMPLOYEE_H
#define UI_NEWEMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NewEmployee
{
public:
    QWidget *widget;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *username_input;
    QLineEdit *name_input;
    QLineEdit *department_input;
    QLineEdit *email_input;
    QLineEdit *mobile_input;
    QLineEdit *cnic_input;
    QLineEdit *id_input;
    QLineEdit *password_input;
    QSpinBox *age_spinbox;
    QComboBox *gender_combobox;
    QLineEdit *salary_input;
    QSpinBox *experience_spinbox;
    QPushButton *pushButton;
    QLabel *label;

    void setupUi(QDialog *NewEmployee)
    {
        if (NewEmployee->objectName().isEmpty())
            NewEmployee->setObjectName("NewEmployee");
        NewEmployee->resize(461, 535);
        NewEmployee->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        widget = new QWidget(NewEmployee);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(30, 80, 411, 381));
        label_2 = new QLabel(widget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 40, 161, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: black;"));
        label_3 = new QLabel(widget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 100, 81, 16));
        label_3->setStyleSheet(QString::fromUtf8("color: black;"));
        label_4 = new QLabel(widget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 10, 171, 16));
        label_4->setStyleSheet(QString::fromUtf8("color: black;"));
        label_5 = new QLabel(widget);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(10, 70, 121, 16));
        label_5->setStyleSheet(QString::fromUtf8("color: black;"));
        label_6 = new QLabel(widget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 130, 71, 16));
        label_6->setStyleSheet(QString::fromUtf8("color: black;"));
        label_7 = new QLabel(widget);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(10, 160, 121, 16));
        label_7->setStyleSheet(QString::fromUtf8("color: black;"));
        label_8 = new QLabel(widget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(10, 220, 81, 16));
        label_8->setStyleSheet(QString::fromUtf8("color: black;"));
        label_9 = new QLabel(widget);
        label_9->setObjectName("label_9");
        label_9->setGeometry(QRect(10, 190, 121, 16));
        label_9->setStyleSheet(QString::fromUtf8("color: black;"));
        label_10 = new QLabel(widget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(10, 250, 91, 16));
        label_10->setStyleSheet(QString::fromUtf8("color: black;"));
        label_11 = new QLabel(widget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(10, 280, 81, 16));
        label_11->setStyleSheet(QString::fromUtf8("color: black;"));
        label_12 = new QLabel(widget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(10, 340, 161, 16));
        label_12->setStyleSheet(QString::fromUtf8("color: black;"));
        label_13 = new QLabel(widget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(10, 310, 111, 16));
        label_13->setStyleSheet(QString::fromUtf8("color: black;"));
        username_input = new QLineEdit(widget);
        username_input->setObjectName("username_input");
        username_input->setGeometry(QRect(190, 10, 201, 21));
        username_input->setStyleSheet(QString::fromUtf8("color :black"));
        name_input = new QLineEdit(widget);
        name_input->setObjectName("name_input");
        name_input->setGeometry(QRect(190, 100, 201, 21));
        department_input = new QLineEdit(widget);
        department_input->setObjectName("department_input");
        department_input->setGeometry(QRect(190, 190, 201, 21));
        email_input = new QLineEdit(widget);
        email_input->setObjectName("email_input");
        email_input->setGeometry(QRect(190, 220, 201, 21));
        mobile_input = new QLineEdit(widget);
        mobile_input->setObjectName("mobile_input");
        mobile_input->setGeometry(QRect(190, 250, 201, 21));
        cnic_input = new QLineEdit(widget);
        cnic_input->setObjectName("cnic_input");
        cnic_input->setGeometry(QRect(190, 280, 201, 21));
        id_input = new QLineEdit(widget);
        id_input->setObjectName("id_input");
        id_input->setGeometry(QRect(190, 70, 201, 21));
        password_input = new QLineEdit(widget);
        password_input->setObjectName("password_input");
        password_input->setGeometry(QRect(190, 40, 201, 21));
        age_spinbox = new QSpinBox(widget);
        age_spinbox->setObjectName("age_spinbox");
        age_spinbox->setGeometry(QRect(270, 130, 61, 25));
        gender_combobox = new QComboBox(widget);
        gender_combobox->addItem(QString());
        gender_combobox->addItem(QString());
        gender_combobox->setObjectName("gender_combobox");
        gender_combobox->setGeometry(QRect(250, 160, 81, 21));
        salary_input = new QLineEdit(widget);
        salary_input->setObjectName("salary_input");
        salary_input->setGeometry(QRect(190, 310, 201, 21));
        experience_spinbox = new QSpinBox(widget);
        experience_spinbox->setObjectName("experience_spinbox");
        experience_spinbox->setGeometry(QRect(250, 340, 71, 25));
        pushButton = new QPushButton(NewEmployee);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(190, 470, 81, 31));
        pushButton->setCursor(QCursor(Qt::PointingHandCursor));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;\n"
""));
        label = new QLabel(NewEmployee);
        label->setObjectName("label");
        label->setGeometry(QRect(190, 10, 81, 61));
        label->setPixmap(QPixmap(QString::fromUtf8("../icons/new_employee.png")));

        retranslateUi(NewEmployee);

        QMetaObject::connectSlotsByName(NewEmployee);
    } // setupUi

    void retranslateUi(QDialog *NewEmployee)
    {
        NewEmployee->setWindowTitle(QCoreApplication::translate("NewEmployee", "Dialog", nullptr));
        label_2->setText(QCoreApplication::translate("NewEmployee", "Enter employee password:  ", nullptr));
        label_3->setText(QCoreApplication::translate("NewEmployee", "Enter name:", nullptr));
        label_4->setText(QCoreApplication::translate("NewEmployee", "Enter employee username:  ", nullptr));
        label_5->setText(QCoreApplication::translate("NewEmployee", "Enter employee ID: ", nullptr));
        label_6->setText(QCoreApplication::translate("NewEmployee", "Enter age: ", nullptr));
        label_7->setText(QCoreApplication::translate("NewEmployee", "Enter gender: ", nullptr));
        label_8->setText(QCoreApplication::translate("NewEmployee", "Enter email: ", nullptr));
        label_9->setText(QCoreApplication::translate("NewEmployee", "Enter department: ", nullptr));
        label_10->setText(QCoreApplication::translate("NewEmployee", "Enter mobile:  ", nullptr));
        label_11->setText(QCoreApplication::translate("NewEmployee", "Enter CNIC: ", nullptr));
        label_12->setText(QCoreApplication::translate("NewEmployee", "Enter experience in years:  ", nullptr));
        label_13->setText(QCoreApplication::translate("NewEmployee", "Enter base salary: ", nullptr));
        username_input->setText(QString());
        gender_combobox->setItemText(0, QCoreApplication::translate("NewEmployee", "male", nullptr));
        gender_combobox->setItemText(1, QCoreApplication::translate("NewEmployee", "female", nullptr));

        pushButton->setText(QCoreApplication::translate("NewEmployee", "Done", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class NewEmployee: public Ui_NewEmployee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWEMPLOYEE_H
