#include "updateattendance.h"
#include "ui_updateattendance.h"
#include <QSqlTableModel>
#include "employee.h"


UpdateAttendance::UpdateAttendance(Employee& employee,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::UpdateAttendance)
{

    emp = employee;
     ui->setupUi(this);






    QString styleSheet = R"(   )";

    myMessage.setStyleSheet(styleSheet);




    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){
        QSqlQuery query(db1);
        query.prepare("SELECT  id  ,leave_date , reason FROM leave_aply WHERE stuff_id = :id;");
        query.bindValue(":id", emp.getId());

        if( query.exec()){
       model_1 = new QSqlTableModel();
       model_1->setQuery(query);
       ui->tableView->setModel(model_1);
       ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
       ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
       ui->tableView->viewport()->setStyleSheet("QAbstractScrollArea { align:center; }");
       ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
       ui->tableView->setStyleSheet(
           "QTableView {"
           "    background-color: #f0f0f0;"
           "    alternate-background-color: #e0e0e0;"
           "    gridline-color: #d0d0d0;"
           "    font: 14px 'Arial';"
           "    selection-background-color: #a0a0a0;"
           "    selection-color: #ffffff;"
            "border : 2px solid  rgb(127, 130, 181); "
           "}"
           "QHeaderView::section {"
           "    background-color: rgb(127, 130, 181);;"
           "    color: #000000;"
           "    padding: 4px;"
           "    font-weight: bold;"
           "}"
           "QTableView::item {"
           "    border: 1px solid  rgb(127, 130, 181);;"
           "    padding: 4px;"
           "color: #000000;"
           "}"
           );
    }

    }




      db1.close();
}


void UpdateAttendance::refresh(){
    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){
        QSqlQuery query(db1);
        query.prepare("SELECT  id  ,leave_date , reason FROM leave_aply WHERE stuff_id = :id;");
        query.bindValue(":id", emp.getId());

        if( query.exec()){
            model_1 = new QSqlTableModel();
            model_1->setQuery(query);
            ui->tableView->setModel(model_1);
            ui->tableView->horizontalHeader()->setDefaultAlignment(Qt::AlignCenter);
            ui->tableView->verticalHeader()->setDefaultAlignment(Qt::AlignCenter);
            ui->tableView->viewport()->setStyleSheet("QAbstractScrollArea { align:center; }");
            ui->tableView->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);
            ui->tableView->setStyleSheet(
                "QTableView {"
                "    background-color: #f0f0f0;"
                "    alternate-background-color: #e0e0e0;"
                "    gridline-color: #d0d0d0;"
                "    font: 14px 'Arial';"
                "    selection-background-color: #a0a0a0;"
                "    selection-color: #ffffff;"
                "border : 2px solid  rgb(127, 130, 181); "
                "}"
                "QHeaderView::section {"
                "    background-color: rgb(127, 130, 181);;"
                "    color: #000000;"
                "    padding: 4px;"
                "    font-weight: bold;"
                "}"
                "QTableView::item {"
                "    border: 1px solid  rgb(127, 130, 181);;"
                "    padding: 4px;"
                "color: #000000;"
                "}"
                );
        }

    }




    db1.close();


}

UpdateAttendance::~UpdateAttendance()
{
    delete ui;
}

void UpdateAttendance::on_pushButton_clicked()
{

    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){

        if( ui->lineEdit->text() != ""  ){
        QSqlQuery query(db1);

        int leave_id = ui->lineEdit->text().toInt();
        query.prepare("DELETE from leave_aply WHERE id = :leave_id ;");
        query.bindValue(":leave_id",leave_id);
        if(query.exec()){
        int newApprovedLeaves = emp.getApprovedLeaves() + 1 ; // Updating leaves after gaining input
        int newPendingLeaves = emp.getPendingLeaves() - 1; // Pending leaves are newly applied leaves minus previous leaves


            // Updating Database with new number of total_leaves and pending_leaves
            query.prepare("UPDATE Employee SET approved_leaves = :newApprovedLeaves, pending_leaves = :pendingLeaves WHERE id = :employeeId;");
            query.bindValue(":newApprovedLeaves", newApprovedLeaves);
            query.bindValue(":pendingLeaves", newPendingLeaves);
            query.bindValue(":employeeId", emp.getId());
            query.exec();

        }
        }
    }

    db1.close();

    refresh();
}


void UpdateAttendance::on_tableView_clicked(const QModelIndex &index)
{

    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){
        QSqlQuery query(db1);

    QString data = model_1->index(index.row(), 0).data().toString();
    int leave_id = data.toInt();

    query.prepare("SELECT  stuff_id,leave_date , reason FROM leave_aply WHERE id = :id;");
    query.bindValue(":id", leave_id);

    if(query.exec()){
        query.next();

         QString  date= query.value("leave_date").toString();
          QString  reason= query.value("reason").toString();

         ui->lineEdit_3->setText(emp.getName());
        ui->lineEdit->setText(data);
        ui->lineEdit_2->setText(date);
        ui->textEdit->setText(reason);

    }
    }

    db1.close();


}


void UpdateAttendance::on_pushButton_2_clicked()
{

    QSqlDatabase db1 = QSqlDatabase::addDatabase("QSQLITE");
    db1.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db1.open()){

        if( ui->lineEdit->text() != ""  ){
            QSqlQuery query(db1);

            int leave_id = ui->lineEdit->text().toInt();
            query.prepare("DELETE from leave_aply WHERE id = :leave_id ;");
            query.bindValue(":leave_id",leave_id);
            if(query.exec()){
                int newRejectedLeaves = emp.getRejectedLeaves() + 1 ; // Updating leaves after gaining input
                int newPendingLeaves = emp.getPendingLeaves() - 1; // Pending leaves are newly applied leaves minus previous leaves


                // Updating Database with new number of total_leaves and pending_leaves
                query.prepare("UPDATE Employee SET rejected_leaves = :newRejectedLeaves, pending_leaves = :pendingLeaves WHERE id = :employeeId;");
                query.bindValue(":newRejectedLeaves", newRejectedLeaves);
                query.bindValue(":pendingLeaves", newPendingLeaves);
                query.bindValue(":employeeId", emp.getId());
                query.exec();

            }else{
                myMessage.setWindowTitle("ops");
                myMessage.setText("sonething went wrong !!");
                myMessage.exec();
            }

        }else{
            myMessage.setWindowTitle("error");
            myMessage.setText("nothing selected");
            myMessage.exec();

        }

    }

    db1.close();

    refresh();

}

