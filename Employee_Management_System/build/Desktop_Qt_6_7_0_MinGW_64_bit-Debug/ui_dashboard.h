/********************************************************************************
** Form generated from reading UI file 'dashboard.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DASHBOARD_H
#define UI_DASHBOARD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Dashboard
{
public:
    QWidget *nav_widget;
    QPushButton *salary_btn;
    QPushButton *performance_btn;
    QPushButton *attendance_btn;
    QPushButton *logout_btn;
    QLabel *emp_label;
    QPushButton *home_btn;
    QStackedWidget *stackedWidget;
    QWidget *home_page;
    QWidget *widget;
    QLabel *empInfo_label;
    QLabel *empID_label;
    QLabel *empName_label;
    QLabel *empEmail_label;
    QLabel *empDept_label;
    QLabel *empMobile_label;
    QLabel *empCnic_label;
    QLabel *empExp_label;
    QLabel *empAge_label;
    QLabel *empGender_label;
    QLabel *profile_img_1;
    QLabel *welcome_label;
    QLabel *quote_label;
    QLabel *task_label;
    QWidget *salary_page;
    QLabel *profile_img_2;
    QLabel *label_5;
    QLabel *tax_label;
    QLabel *bonus_label;
    QLabel *salary_label;
    QLabel *salary_graph_label;
    QWidget *attendance_page;
    QLabel *profile_img_3;
    QWidget *widget_2;
    QWidget *widget_3;
    QLabel *label_2;
    QLabel *total_leaves_label;
    QWidget *widget_4;
    QLabel *label_4;
    QLabel *approved_leaves_label;
    QWidget *widget_5;
    QLabel *label_6;
    QLabel *rejected_leaves_label;
    QWidget *widget_6;
    QLabel *widget_7;
    QLabel *pending_leaves_label;
    QLabel *label_3;
    QPushButton *leave_btn;
    QLabel *label_7;
    QWidget *performance_page;
    QLabel *profile_img_4;
    QLabel *label_8;
    QLabel *performance_graph_label;

    void setupUi(QDialog *Dashboard)
    {
        if (Dashboard->objectName().isEmpty())
            Dashboard->setObjectName("Dashboard");
        Dashboard->resize(1366, 768);
        Dashboard->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 255);"));
        nav_widget = new QWidget(Dashboard);
        nav_widget->setObjectName("nav_widget");
        nav_widget->setGeometry(QRect(0, 0, 51, 768));
        nav_widget->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;"));
        salary_btn = new QPushButton(nav_widget);
        salary_btn->setObjectName("salary_btn");
        salary_btn->setGeometry(QRect(10, 150, 31, 21));
        salary_btn->setCursor(QCursor(Qt::PointingHandCursor));
        salary_btn->setStyleSheet(QString::fromUtf8("border: none;\n"
" background-color: transparent;"));
        performance_btn = new QPushButton(nav_widget);
        performance_btn->setObjectName("performance_btn");
        performance_btn->setGeometry(QRect(10, 220, 31, 21));
        performance_btn->setCursor(QCursor(Qt::PointingHandCursor));
        performance_btn->setStyleSheet(QString::fromUtf8("border: none;\n"
" background-color: transparent;"));
        attendance_btn = new QPushButton(nav_widget);
        attendance_btn->setObjectName("attendance_btn");
        attendance_btn->setGeometry(QRect(10, 190, 31, 21));
        attendance_btn->setCursor(QCursor(Qt::PointingHandCursor));
        attendance_btn->setStyleSheet(QString::fromUtf8("border: none;\n"
" background-color: transparent;"));
        logout_btn = new QPushButton(nav_widget);
        logout_btn->setObjectName("logout_btn");
        logout_btn->setGeometry(QRect(10, 260, 31, 21));
        logout_btn->setCursor(QCursor(Qt::PointingHandCursor));
        logout_btn->setStyleSheet(QString::fromUtf8("border: none;\n"
" background-color: transparent;"));
        emp_label = new QLabel(nav_widget);
        emp_label->setObjectName("emp_label");
        emp_label->setGeometry(QRect(10, 30, 21, 31));
        emp_label->setPixmap(QPixmap(QString::fromUtf8("../icons/employee.png")));
        home_btn = new QPushButton(nav_widget);
        home_btn->setObjectName("home_btn");
        home_btn->setGeometry(QRect(10, 110, 31, 21));
        home_btn->setCursor(QCursor(Qt::PointingHandCursor));
        stackedWidget = new QStackedWidget(Dashboard);
        stackedWidget->setObjectName("stackedWidget");
        stackedWidget->setGeometry(QRect(50, 0, 1311, 761));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: white;"));
        home_page = new QWidget();
        home_page->setObjectName("home_page");
        widget = new QWidget(home_page);
        widget->setObjectName("widget");
        widget->setGeometry(QRect(40, 80, 491, 261));
        empInfo_label = new QLabel(widget);
        empInfo_label->setObjectName("empInfo_label");
        empInfo_label->setGeometry(QRect(10, 30, 211, 21));
        empInfo_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;\n"
""));
        empID_label = new QLabel(widget);
        empID_label->setObjectName("empID_label");
        empID_label->setGeometry(QRect(10, 60, 241, 21));
        empID_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empName_label = new QLabel(widget);
        empName_label->setObjectName("empName_label");
        empName_label->setGeometry(QRect(10, 80, 241, 21));
        empName_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empEmail_label = new QLabel(widget);
        empEmail_label->setObjectName("empEmail_label");
        empEmail_label->setGeometry(QRect(10, 160, 241, 21));
        empEmail_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empDept_label = new QLabel(widget);
        empDept_label->setObjectName("empDept_label");
        empDept_label->setGeometry(QRect(10, 140, 241, 21));
        empDept_label->setStyleSheet(QString::fromUtf8("color: black;\n"
""));
        empMobile_label = new QLabel(widget);
        empMobile_label->setObjectName("empMobile_label");
        empMobile_label->setGeometry(QRect(10, 180, 241, 21));
        empMobile_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empCnic_label = new QLabel(widget);
        empCnic_label->setObjectName("empCnic_label");
        empCnic_label->setGeometry(QRect(10, 200, 431, 21));
        empCnic_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empExp_label = new QLabel(widget);
        empExp_label->setObjectName("empExp_label");
        empExp_label->setGeometry(QRect(10, 220, 241, 20));
        empExp_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empAge_label = new QLabel(widget);
        empAge_label->setObjectName("empAge_label");
        empAge_label->setGeometry(QRect(10, 100, 241, 21));
        empAge_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        empGender_label = new QLabel(widget);
        empGender_label->setObjectName("empGender_label");
        empGender_label->setGeometry(QRect(10, 120, 241, 21));
        empGender_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"\n"
""));
        profile_img_1 = new QLabel(home_page);
        profile_img_1->setObjectName("profile_img_1");
        profile_img_1->setGeometry(QRect(789, 0, 521, 351));
        welcome_label = new QLabel(home_page);
        welcome_label->setObjectName("welcome_label");
        welcome_label->setGeometry(QRect(50, 30, 481, 31));
        welcome_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;"));
        quote_label = new QLabel(home_page);
        quote_label->setObjectName("quote_label");
        quote_label->setGeometry(QRect(200, 630, 891, 131));
        quote_label->setPixmap(QPixmap(QString::fromUtf8("../Downloads/output-onlinepngtools (2).png")));
        task_label = new QLabel(home_page);
        task_label->setObjectName("task_label");
        task_label->setGeometry(QRect(50, 360, 501, 21));
        task_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;\n"
""));
        stackedWidget->addWidget(home_page);
        salary_page = new QWidget();
        salary_page->setObjectName("salary_page");
        profile_img_2 = new QLabel(salary_page);
        profile_img_2->setObjectName("profile_img_2");
        profile_img_2->setGeometry(QRect(979, 0, 331, 261));
        label_5 = new QLabel(salary_page);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(50, 30, 141, 31));
        label_5->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;\n"
""));
        tax_label = new QLabel(salary_page);
        tax_label->setObjectName("tax_label");
        tax_label->setGeometry(QRect(50, 150, 211, 21));
        tax_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;\n"
""));
        bonus_label = new QLabel(salary_page);
        bonus_label->setObjectName("bonus_label");
        bonus_label->setGeometry(QRect(50, 180, 211, 21));
        bonus_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 17px;\n"
"font-weight: 1000;\n"
""));
        salary_label = new QLabel(salary_page);
        salary_label->setObjectName("salary_label");
        salary_label->setGeometry(QRect(50, 110, 311, 31));
        salary_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;\n"
""));
        salary_graph_label = new QLabel(salary_page);
        salary_graph_label->setObjectName("salary_graph_label");
        salary_graph_label->setGeometry(QRect(50, 240, 871, 391));
        salary_graph_label->setPixmap(QPixmap(QString::fromUtf8("../Pictures/salary_graph.png")));
        stackedWidget->addWidget(salary_page);
        attendance_page = new QWidget();
        attendance_page->setObjectName("attendance_page");
        profile_img_3 = new QLabel(attendance_page);
        profile_img_3->setObjectName("profile_img_3");
        profile_img_3->setGeometry(QRect(889, 0, 421, 291));
        widget_2 = new QWidget(attendance_page);
        widget_2->setObjectName("widget_2");
        widget_2->setGeometry(QRect(20, 150, 551, 71));
        widget_3 = new QWidget(widget_2);
        widget_3->setObjectName("widget_3");
        widget_3->setGeometry(QRect(20, 0, 101, 71));
        label_2 = new QLabel(widget_3);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 10, 81, 16));
        label_2->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        total_leaves_label = new QLabel(widget_3);
        total_leaves_label->setObjectName("total_leaves_label");
        total_leaves_label->setGeometry(QRect(40, 40, 21, 16));
        total_leaves_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        widget_4 = new QWidget(widget_2);
        widget_4->setObjectName("widget_4");
        widget_4->setGeometry(QRect(130, 0, 141, 71));
        label_4 = new QLabel(widget_4);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(10, 9, 121, 21));
        label_4->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        approved_leaves_label = new QLabel(widget_4);
        approved_leaves_label->setObjectName("approved_leaves_label");
        approved_leaves_label->setGeometry(QRect(60, 40, 21, 16));
        approved_leaves_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        widget_5 = new QWidget(widget_2);
        widget_5->setObjectName("widget_5");
        widget_5->setGeometry(QRect(280, 0, 131, 71));
        label_6 = new QLabel(widget_5);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(10, 10, 111, 21));
        label_6->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        rejected_leaves_label = new QLabel(widget_5);
        rejected_leaves_label->setObjectName("rejected_leaves_label");
        rejected_leaves_label->setGeometry(QRect(50, 40, 21, 16));
        rejected_leaves_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        widget_6 = new QWidget(widget_2);
        widget_6->setObjectName("widget_6");
        widget_6->setGeometry(QRect(420, 0, 121, 71));
        widget_7 = new QLabel(widget_6);
        widget_7->setObjectName("widget_7");
        widget_7->setGeometry(QRect(30, 10, 61, 21));
        widget_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        pending_leaves_label = new QLabel(widget_6);
        pending_leaves_label->setObjectName("pending_leaves_label");
        pending_leaves_label->setGeometry(QRect(50, 40, 21, 16));
        pending_leaves_label->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 15px;"));
        label_3 = new QLabel(attendance_page);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(50, 30, 211, 31));
        label_3->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;"));
        leave_btn = new QPushButton(attendance_page);
        leave_btn->setObjectName("leave_btn");
        leave_btn->setGeometry(QRect(50, 230, 141, 41));
        leave_btn->setCursor(QCursor(Qt::PointingHandCursor));
        leave_btn->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 130, 181); \n"
"border: none;\n"
"color: white;\n"
"font-weight: 500;"));
        label_7 = new QLabel(attendance_page);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(50, 110, 111, 21));
        label_7->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;"));
        stackedWidget->addWidget(attendance_page);
        performance_page = new QWidget();
        performance_page->setObjectName("performance_page");
        profile_img_4 = new QLabel(performance_page);
        profile_img_4->setObjectName("profile_img_4");
        profile_img_4->setGeometry(QRect(899, 0, 411, 321));
        label_8 = new QLabel(performance_page);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(50, 30, 281, 31));
        label_8->setStyleSheet(QString::fromUtf8("color: black;\n"
"font-size: 20px;\n"
"font-weight: 1000;\n"
""));
        performance_graph_label = new QLabel(performance_page);
        performance_graph_label->setObjectName("performance_graph_label");
        performance_graph_label->setGeometry(QRect(40, 120, 641, 481));
        performance_graph_label->setPixmap(QPixmap(QString::fromUtf8("../Pictures/performance_graph1.png")));
        stackedWidget->addWidget(performance_page);

        retranslateUi(Dashboard);

        QMetaObject::connectSlotsByName(Dashboard);
    } // setupUi

    void retranslateUi(QDialog *Dashboard)
    {
        Dashboard->setWindowTitle(QCoreApplication::translate("Dashboard", "Dashboard", nullptr));
        salary_btn->setText(QString());
        performance_btn->setText(QString());
        attendance_btn->setText(QString());
        logout_btn->setText(QString());
        emp_label->setText(QString());
        home_btn->setText(QString());
        empInfo_label->setText(QCoreApplication::translate("Dashboard", "Employee Information", nullptr));
        empID_label->setText(QCoreApplication::translate("Dashboard", "Employee ID:", nullptr));
        empName_label->setText(QCoreApplication::translate("Dashboard", "Employee name:", nullptr));
        empEmail_label->setText(QCoreApplication::translate("Dashboard", "Employee email:", nullptr));
        empDept_label->setText(QCoreApplication::translate("Dashboard", "Employee department:", nullptr));
        empMobile_label->setText(QCoreApplication::translate("Dashboard", "Employee mobile: ", nullptr));
        empCnic_label->setText(QCoreApplication::translate("Dashboard", "Employee CNIC:", nullptr));
        empExp_label->setText(QCoreApplication::translate("Dashboard", "Employee experience:", nullptr));
        empAge_label->setText(QCoreApplication::translate("Dashboard", "Employee age:", nullptr));
        empGender_label->setText(QCoreApplication::translate("Dashboard", "Employee gender:", nullptr));
        profile_img_1->setText(QString());
        welcome_label->setText(QCoreApplication::translate("Dashboard", "Welcome Back", nullptr));
        quote_label->setText(QString());
        task_label->setText(QCoreApplication::translate("Dashboard", "Current task: ", nullptr));
        profile_img_2->setText(QString());
        label_5->setText(QCoreApplication::translate("Dashboard", "Salary", nullptr));
        tax_label->setText(QCoreApplication::translate("Dashboard", "Tax: ", nullptr));
        bonus_label->setText(QCoreApplication::translate("Dashboard", "Bonus:", nullptr));
        salary_label->setText(QString());
        salary_graph_label->setText(QString());
        profile_img_3->setText(QString());
        label_2->setText(QCoreApplication::translate("Dashboard", "Total leaves", nullptr));
        total_leaves_label->setText(QString());
        label_4->setText(QCoreApplication::translate("Dashboard", "Approved leaves", nullptr));
        approved_leaves_label->setText(QString());
        label_6->setText(QCoreApplication::translate("Dashboard", "Rejected leaves", nullptr));
        rejected_leaves_label->setText(QString());
        widget_7->setText(QCoreApplication::translate("Dashboard", "Pending", nullptr));
        pending_leaves_label->setText(QString());
        label_3->setText(QCoreApplication::translate("Dashboard", "Attendance", nullptr));
        leave_btn->setText(QCoreApplication::translate("Dashboard", "Apply for leave", nullptr));
        label_7->setText(QCoreApplication::translate("Dashboard", "87.01%", nullptr));
        profile_img_4->setText(QString());
        label_8->setText(QCoreApplication::translate("Dashboard", "Performance", nullptr));
        performance_graph_label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Dashboard: public Ui_Dashboard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DASHBOARD_H
