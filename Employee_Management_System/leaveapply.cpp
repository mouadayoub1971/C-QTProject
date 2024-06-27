#include "leaveapply.h"
#include "ui_leaveapply.h"

// Variables to hold employee ID and leaves throughout this dialog
int empId;
int initialTotalLeaves, initialPendingLeaves;

LeaveApply::LeaveApply(Employee& obj, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LeaveApply)
{
    ui->setupUi(this);

    empId = obj.getId();
    initialTotalLeaves = obj.getTotalLeaves();
    initialPendingLeaves = obj.getPendingLeaves();

    ui->leave_calendar->setStyleSheet(R"(
        QCalendarWidget QWidget {
            alternate-background-color: #f0f0f0;
            color:black;
        }
        QCalendarWidget QAbstractItemView:enabled {
            background-color: white;
            color: black;
            selection-background-color: black;
            selection-color: black;
        }
        QCalendarWidget QToolButton {
            height: 30px;
            width: 150px;
            color: black;
            font-size: 18px;
            icon-size: 24px, 24px;
            background-color: rgb(127, 130, 181);
            border: none;
            border-radius: 5px;
        }
        QCalendarWidget QToolButton:hover {
            background-color: rgb(127, 130, 185);
        }
        QCalendarWidget QToolButton::menu-indicator {
            subcontrol-position: right;
            subcontrol-origin: padding;

        }
        QCalendarWidget QSpinBox {
            width: 100px;
            font-size: 18px;
            color: black;
            background: transparent;
            selection-background-color: rgb(127, 130, 181);
            selection-color: black;
        }
        QCalendarWidget QSpinBox::up-button {
            subcontrol-origin: border;
            subcontrol-position: top right;

        }
        QCalendarWidget QSpinBox::down-button {
            subcontrol-origin: border;
            subcontrol-position: bottom right;

        }
        QCalendarWidget QSpinBox::up-arrow {
            width: 15px;
            height: 15px;
            color:black;
        }
        QCalendarWidget QSpinBox::down-arrow {
            width: 15px;
            height: 15px;
        }
        QCalendarWidget QSpinBox QAbstractItemView {
            background-color: rgb(127, 130, 181);
            color: black;
            selection-background-color: rgb(127, 130, 185);
            selection-color: black;
        }
    )");
    ui->lineEdit->setStyleSheet("QWidget {color:black}");
    ui->label_4->setStyleSheet("QWidget {color:black}");
}

LeaveApply::~LeaveApply()
{
    delete ui;
}

void LeaveApply::on_pushButton_clicked()
{
    QString leave_date = ui->label_4->text();
    QString reason = ui->lineEdit->text();

    if(leave_date != "" &&  reason!=""){
    int newTotalLeaves = initialTotalLeaves + 1; // Updating leaves after gaining input
    int newPendingLeaves = 1 + initialPendingLeaves; // Pending leaves are newly applied leaves minus previous leaves
    QSqlDatabase db3 = QSqlDatabase::addDatabase("QSQLITE");
    db3.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db3.open()){
        QSqlQuery query(db3);
        // Updating Database with new number of total_leaves and pending_leaves
        query.prepare("UPDATE Employee SET total_leaves = :newLeaves, pending_leaves = :pendingLeaves WHERE id = :employeeId;");
        query.bindValue(":newLeaves", newTotalLeaves);
        query.bindValue(":pendingLeaves", newPendingLeaves);
        query.bindValue(":employeeId", empId);
        query.exec();

        QSqlQuery query2(db3);

        query2.prepare("insert into leave_aply(stuff_id , leave_date , reason) values (:stuff_id,:leave_date , :reason);");

        query2.bindValue(":stuff_id", empId);
        query2.bindValue(":leave_date", leave_date);
        query2.bindValue(":reason", reason);
        query2.exec();
        db3.close();
    }
    accept();

}
}


void LeaveApply::on_leave_calendar_clicked(const QDate &date)
{
    ui->label_4->setText(date.toString());
}

