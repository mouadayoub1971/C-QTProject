#include "removeemployee.h"
#include "ui_removeemployee.h"

RemoveEmployee::RemoveEmployee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::RemoveEmployee)
{
    ui->setupUi(this);

    QString styleSheet = R"(   )";

    myMessage.setStyleSheet(styleSheet);
}

RemoveEmployee::~RemoveEmployee()
{
    delete ui;
}

void RemoveEmployee::on_done_btn_clicked()
{
    int id = ui->emp_id_spinbox->value();
    QSqlDatabase db5 = QSqlDatabase::addDatabase("QSQLITE");
    db5.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db5.open()){
        QSqlQuery query(db5);
        query.prepare("SELECT * FROM Employee_login WHERE id = :id;");
        query.bindValue(":id", id);
        if(query.exec() && query.next()){
            QSqlQuery query1(db5);
            query1.prepare("DELETE FROM Employee_login WHERE id = :id");
            query1.bindValue(":id", id);
            query1.exec();
            QSqlQuery query2(db5);
            query2.prepare("DELETE FROM Employee WHERE id = :id;");
            query2.bindValue(":id", id);
            query2.exec();

            myMessage.setWindowTitle("Success");
            myMessage.setText("Employee Removed");
            myMessage.exec();
        }
        else{
            myMessage.setWindowTitle("Failure");
            myMessage.setText("ID not found");
            myMessage.exec();

        }
    }
    db5.close();
    accept();
}

