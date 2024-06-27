#include "dashboard.h"
#include "ui_dashboard.h"
#include "loginwindow.h"

Dashboard::Dashboard(Employee &employee,QWidget *parent):
    QDialog(parent),
    ui(new Ui::Dashboard)
{
    emp = employee;
    ui->setupUi(this);



    QString styleSheet = R"(   )";

    myMessage.setStyleSheet(styleSheet);

    // ##############SIDE_NAVIGATION_BAR######################
    QIcon home("C:/Users/mouad/Desktop/QT_new_project-main/home.png");
    ui->home_btn->setIcon(home);
    ui->home_btn->setIconSize(QSize(25, 25));
    ui->home_btn->setFixedSize(QSize(25, 25));
    ui->home_btn->setFocusPolicy(Qt::NoFocus);

    QIcon salary("C:/Users/mouad/Desktop/QT_new_project-main/salary.png");
    ui->salary_btn->setIcon(salary);
    ui->salary_btn->setIconSize(QSize(25, 25));
    ui->salary_btn->setFixedSize(QSize(25, 25));
    ui->salary_btn->setFocusPolicy(Qt::NoFocus);

    QIcon attendance("C:/Users/mouad/Desktop/QT_new_project-main/attendance.png");
    ui->attendance_btn->setIcon(attendance);
    ui->attendance_btn->setIconSize(QSize(25, 25));
    ui->attendance_btn->setFixedSize(QSize(25, 25));
    ui->attendance_btn->setFocusPolicy(Qt::NoFocus);

    QIcon performance("C:/Users/mouad/Desktop/QT_new_project-main/performance.png");
    ui->performance_btn->setIcon(performance);
    ui->performance_btn->setIconSize(QSize(25, 25));
    ui->performance_btn->setFixedSize(QSize(25, 25));
    ui->performance_btn->setFocusPolicy(Qt::NoFocus);

    QIcon logout("C:/Users/mouad/Desktop/QT_new_project-main/logout.png");
    ui->logout_btn->setIcon(logout);
    ui->logout_btn->setIconSize(QSize(25, 25));
    ui->logout_btn->setFixedSize(QSize(25, 25));
    ui->logout_btn->setFocusPolicy(Qt::NoFocus);

    //#######################HOME_PAGE#######################
    ui->welcome_label->setText("Welcome Back " + emp.getName() + "!");
    // Load images
    QPixmap female_pic("C:/Users/mouad/Desktop/QT_new_project-main/girl.jpg");
    QPixmap male_pic("C:/Users/mouad/Desktop/QT_new_project-main/male.jpg");

    // Check if images are loaded correctly
    if (female_pic.isNull()) {
        qDebug() << "Failed to load female image";
    }
    if (male_pic.isNull()) {
        qDebug() << "Failed to load male image";
    }

    // Determine which image to use based on gender
    QPixmap profile_pic;
    if (emp.getGender() == "female" && !female_pic.isNull()) {
        profile_pic = female_pic;
    } else if (!male_pic.isNull()) {
        profile_pic = male_pic;
    }

    // Set the pixmap to the labels and ensure they scale properly
    if (!profile_pic.isNull()) {
        QSize desiredSize(500, 500); // Set your desired size here

        ui->profile_img_1->setPixmap(profile_pic.scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->profile_img_2->setPixmap(profile_pic.scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->profile_img_3->setPixmap(profile_pic.scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
        ui->profile_img_4->setPixmap(profile_pic.scaled(desiredSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));

        // Optional: Set alignment if needed
        ui->profile_img_1->setAlignment(Qt::AlignCenter);
        ui->profile_img_2->setAlignment(Qt::AlignCenter);
        ui->profile_img_3->setAlignment(Qt::AlignCenter);
        ui->profile_img_4->setAlignment(Qt::AlignCenter);
    } else {
        qDebug() << "No valid image to display";
    }



    // Displaying employee's information
    ui->empID_label->setText("Employee ID: " + QString::number(emp.getId()));
    ui->empName_label->setText("Name: " + emp.getName());
    ui->empAge_label->setText("Age: " + QString::number(emp.getAge()) + "years");
    ui->empGender_label->setText("Gender: " + emp.getGender());
    ui->empDept_label->setText("Department: " + emp.getDepartment());
    ui->empEmail_label->setText("Email: " + emp.getEmail());
    ui->empMobile_label->setText("Mobile number: " + emp.getMobile());
    ui->empCnic_label->setText("Entreprise number: " + emp.getCnic());
    ui->empExp_label->setText("Experience: " + emp.getExperienceInYears()+ "years");
    if(emp.getCurrentTask() != ""){
        ui->task_label->setText("Current task: " + emp.getCurrentTask());
    }
    else{
        ui->task_label->setText("Current task:    -");
    }
    //#######################SALARY_PAGE#######################
    ui->salary_label->setText(QString::number(emp.getSalary()) + "  Dirhams per month");
    ui->tax_label->setText("Tax: " + QString::number((5 * emp.getSalary()) / 100));
    ui->bonus_label->setText("Bonus: "+QString::number((10 * emp.getSalary()) / 100));

    //####################ATTENDANCE_PAGE####################
    ui->total_leaves_label->setText(QString::number(emp.getTotalLeaves()));
    ui->approved_leaves_label->setText(QString::number(emp.getApprovedLeaves()));
    ui->rejected_leaves_label->setText(QString::number(emp.getRejectedLeaves()));
    ui->pending_leaves_label->setText(QString::number(emp.getPendingLeaves()));

    //####################PERFORMANCE_PAGE####################
    QPixmap performance_graph("C:/Users/mouad/Desktop/QT_new_project-main/adaa.png");

    // Check if the performance graph image is loaded correctly
    if (performance_graph.isNull()) {
        qDebug() << "Failed to load performance graph image";
    }

    // Function to update the performance graph image
    auto updatePerformanceGraph = [&](const QPixmap& graph) {
        if (!graph.isNull()) {
            QSize graphSize(600, 400); // Set your desired size here
            ui->performance_graph_label->setPixmap(graph.scaled(graphSize, Qt::KeepAspectRatio, Qt::SmoothTransformation));
            ui->performance_graph_label->setAlignment(Qt::AlignCenter);
        } else {
            qDebug() << "No valid performance graph to display";
        }
    };

    // Update performance graph image initially
    updatePerformanceGraph(performance_graph);

    // Add connection to update images when page is changed

}

// Destructor
Dashboard::~Dashboard()
{
    delete ui;
}

// Managing different windows in dashboard
void Dashboard::on_home_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->home_page);
}

void Dashboard::on_salary_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->salary_page);
}


void Dashboard::on_attendance_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->attendance_page);
}


void Dashboard::on_performance_btn_clicked()
{
    ui->stackedWidget->setCurrentWidget(ui->performance_page);
}

void Dashboard::on_leave_btn_clicked()
{
    LeaveApply leave(emp);
    leave.setModal(true);
    leave.setWindowTitle("Apply for leave");
    leave.exec();
    QSqlDatabase db2 = QSqlDatabase::addDatabase("QSQLITE");
    //    "C:\Users\mouad\Desktop\QT_new_project-main\EMS.db"
    //  "C:\Users\mouad\Desktop\QT_new_project-main\logout.png"
    db2.setDatabaseName("C:/Users/mouad/Desktop/QT_new_project-main/EMS.db");
    if(db2.open()){
        QSqlQuery query(db2);
        query.prepare("SELECT total_leaves, pending_leaves FROM Employee WHERE id = :empId;");
        query.bindValue(":empId", emp.getId());
        if(query.exec() && query.next()){
            int totalLeaves = query.value("total_leaves").toInt();
            int pendingLeaves = query.value("pending_leaves").toInt();
            ui->total_leaves_label->setText(QString::number(totalLeaves));
            ui->pending_leaves_label->setText(QString::number(pendingLeaves));
            db2.close();
        }
    }
}

void Dashboard::on_logout_btn_clicked()
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
