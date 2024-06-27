#ifndef UPDATEATTENDANCE_H
#define UPDATEATTENDANCE_H

#include <QDialog>
#include "employee.h"
#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>
#include <QString>
#include <QMessageBox>
#include "employee.h"

namespace Ui {
class UpdateAttendance;
}

class UpdateAttendance : public QDialog
{
    Q_OBJECT

public:
    explicit UpdateAttendance(Employee& employee, QWidget *parent = nullptr);
    ~UpdateAttendance();

private slots:
    void on_pushButton_clicked();

    void on_tableView_clicked(const QModelIndex &index);
    void refresh();
    void on_pushButton_2_clicked();

private:
    Employee emp;
    Ui::UpdateAttendance *ui;
    QSqlTableModel * model_1;
    QMessageBox myMessage ;
};

#endif // UPDATEATTENDANCE_H
