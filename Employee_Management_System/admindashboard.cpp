#include "admindashboard.h"
#include "ui_admindashboard.h"
#include "loginwindow.h"
// Replace with your actual login dialog header file


int initialTotalEmployees, finalTotalEmployees;

AdminDashboard::AdminDashboard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::AdminDashboard)
{
    ui->setupUi(this);

    QString styleSheet = R"(   )";

    myMessage.setStyleSheet(styleSheet);

    // Setting navigation bar icons
    //    "C:\Users\mouad\Desktop\QT_new_project-main\EMS.db"
    //  "C:\Users\mouad\Desktop\QT_new_project-main\logout.png"
    QIcon logout("C:/Users/mouad/Desktop/QT_new_project-main/logout.png");
    ui->logout_btn->setIcon(logout);
    ui->logout_btn->setIconSize(QSize(25, 25));
    ui->logout_btn->setFixedSize(QSize(25, 25));
    ui->logout_btn->setFocusPolicy(Qt::NoFocus);

    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if (db.open()){
        QSqlQuery query1(db);
           query1.prepare("SELECT COUNT(*) FROM Employee;");
            if (!query1.exec()) {
                qDebug() << "Error executing query:" << query1.lastError().text();
            }
            if (query1.next()) {
                initialTotalEmployees = query1.value(0).toInt();
                ui->total_employees_label->setText(QString::number(initialTotalEmployees));
                QSqlQuery query2;
                query2.prepare("SELECT id, name , department FROM Employee;");
                if (!query2.exec()) {

                    qDebug() << "Error executing query:" << query2.lastError().text();
                    return;
                }


                 model_1 = new QSqlTableModel(this);
                model_1->setQuery(query2);
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
                    "}"
                    "QHeaderView::section {"
                    "    background-color: #d0d0d0;"
                    "    color: #000000;"
                    "    padding: 4px;"
                    "    font-weight: bold;"
                    "    border: 1px solid #c0c0c0;"
                    "}"
                    "QTableView::item {"
                    "    border: 1px solid #d0d0d0;"
                    "    padding: 4px;"
                    "color: #000000;"
                    "}"
                    );

            } else {
                qDebug() << "No result fetched!";
            }
        }
    else{
        QMessageBox::critical(this, "Failure", "Unable to connect database :(");
    }
        db.close();
}

AdminDashboard::~AdminDashboard()
{
    delete ui;
}

void AdminDashboard::refresh(){

    QSqlDatabase db4 = QSqlDatabase::addDatabase("QSQLITE");
    db4.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if(db4.open()){
        QSqlQuery query1(db4);
        query1.prepare("SELECT COUNT(*) FROM Employee;");
        if(query1.exec() && query1.next()){
            finalTotalEmployees = query1.value(0).toInt();
            int newEmployees = finalTotalEmployees - initialTotalEmployees;
            ui->total_employees_label->setText(QString::number(finalTotalEmployees));
            ui->newemployees_label->setText(QString::number(newEmployees));
        }
        QSqlQuery query2(db4);
        query2.prepare("SELECT id, name , department ,current_task  FROM Employee ORDER BY id ;");
        if(query2.exec()){

            model_1 = new QSqlTableModel();
            model_1->setQuery(query2);
            ui->tableView->setModel(model_1);

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
                "}"
                "QHeaderView::section {"
                "    background-color: #d0d0d0;"
                "    color: #000000;"
                "    padding: 4px;"
                "    font-weight: bold;"
                "    border: 1px solid #c0c0c0;"
                "}"
                "QTableView::item {"
                "    border: 1px solid #d0d0d0;"
                "    padding: 4px;"
                "color: #000000;"
                "}"
                );

        }
    }
    db4.close();

}

void AdminDashboard::on_add_new_employee_btn_clicked()
{
    NewEmployee newEmp;
    newEmp.setModal(true);
    newEmp.setWindowTitle("New Employee");
    newEmp.exec();
    this->refresh();
}

void AdminDashboard::on_remove_employee_btn_clicked()
{
    RemoveEmployee remEmp;
    remEmp.setModal(true);
    remEmp.setWindowTitle("Remove Employee");
    remEmp.exec();
    this->refresh();
}

void AdminDashboard::on_asign_task_btn_clicked()
{
    AssignTask task;
    task.setModal(true);
    task.setWindowTitle("Assign Task");
    task.exec();
    this->refresh();
}

void AdminDashboard::on_manage_attendance_btn_clicked()
{
    ManageAttendance atd;
    atd.setModal(true);
    atd.exec();
}

void AdminDashboard::on_logout_btn_clicked()
{
    int reply;

    myMessage.setWindowTitle("Quit?");
    myMessage.setText("Are you sure you want to quit?");

    myMessage.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    myMessage.setDefaultButton(QMessageBox::No);

    reply = myMessage.exec();
    if (reply == QMessageBox::Yes) {
        myMessage.setStandardButtons(QMessageBox::Yes);
        myMessage.setWindowTitle("Logged Out");
        myMessage.setText("You are successfully logged out");
        myMessage.exec();

        // Close the current admin dashboard window
        this->close();

        // Create an instance of your login dialog
        LoginWindow *loginDialog = new LoginWindow;
        loginDialog->setWindowTitle("Login");
        loginDialog->show(); // Show the login dialog modally


    }
}


