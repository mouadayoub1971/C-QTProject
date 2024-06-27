#include "assigntask.h"
#include "ui_assigntask.h"

AssignTask::AssignTask(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AssignTask)
{
    ui->setupUi(this);
    ui->emp_id_spinbox->setStyleSheet("QWidget {color : black;}");
    ui->task_lineedit->setStyleSheet("QWidget {color : black;}");

    QString styleSheet = R"(   )";

    myMessage.setStyleSheet(styleSheet);

}

AssignTask::~AssignTask()
{
    delete ui;
}

void AssignTask::on_done_btn_clicked()
{

    int id = ui->emp_id_spinbox->value();
    QString task = ui->task_lineedit->text();
    //    "C:\Users\mouad\Desktop\QT_new_project-main\EMS.db"
    //  "C:\Users\mouad\Desktop\QT_new_project-main\logout.png"
  QSqlDatabase db5 = QSqlDatabase::addDatabase("QSQLITE");
    db5.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db5.open()){
        QSqlQuery query(db5);
        query.prepare("UPDATE Employee SET current_task = :task WHERE id = :id;");
        query.bindValue(":task", task);
        query.bindValue(":id", id);
        if(query.exec()){

            myMessage.setWindowTitle("Success");
            myMessage.setText("Task assigned");
            myMessage.exec();
        }
        else{
            myMessage.setText("Employee Removed");
            myMessage.exec();
        }
    }
    db5.close();
    accept();

}

