#include "manageattendance.h"
#include "ui_manageattendance.h"

ManageAttendance::ManageAttendance(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ManageAttendance)
{
    ui->setupUi(this);
    ui->spinBox->setStyleSheet("QWidget{color:black;}");
}

ManageAttendance::~ManageAttendance()
{
    delete ui;
}

void ManageAttendance::on_pushButton_clicked()
{
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){

        int  id = ui->spinBox->value();

            QSqlQuery query2(db1);
            query2.prepare("SELECT * FROM Employee WHERE id = :id");
            query2.bindValue(":id", id);
            if(query2.exec() && query2.next()){
                // Declaring necessary variables to retrieve data from Database

                QString username,name, gender, department, email, mobile, cnic, experienceInYears, currentTask;
                int id, age, salary, totalLeaves, approvedLeaves, rejectedLeaves, pendingLeaves;
                username = query2.value("username").toString();
                id = query2.value("id").toInt();
                name = query2.value("name").toString();
                age = query2.value("age").toInt();
                gender = query2.value("gender").toString();
                department = query2.value("department").toString();
                email = query2.value("email").toString();
                mobile = query2.value("mobile").toString();
                cnic = query2.value("cnic").toString();
                salary = query2.value("salary").toInt();
                experienceInYears = query2.value("experience").toString();
                totalLeaves = query2.value("total_leaves").toInt();
                approvedLeaves = query2.value("approved_leaves").toInt();
                rejectedLeaves = query2.value("rejected_leaves").toInt();
                pendingLeaves = query2.value("pending_leaves").toInt();
                currentTask = query2.value("current_task").toString();
                // Calling parameterized Employee constructor to create object
                Employee emp(username, id, name, age, gender, department, email, mobile, cnic,
                             salary, experienceInYears, totalLeaves, approvedLeaves, rejectedLeaves, pendingLeaves, currentTask);
                db1.close();

                UpdateAttendance obj(emp);
                obj.setModal(true);
                obj.setWindowTitle("Manange leaves");
                obj.exec();
                accept();



            }


    }
    else{
        QMessageBox::critical(this, "Connection Error", "Unable to connect database :(");
    }


}

