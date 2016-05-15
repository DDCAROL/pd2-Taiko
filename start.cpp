#include "start.h"
#include "ui_start.h"

start::start(QWidget *parent) :
	    QMainWindow(parent),
		    ui(new Ui::start)
{
	    ui->setupUi(this);
}

start::~start()
{
	    delete ui;
}

void start::on_pushButton_clicked()
{
	    this->close();
		    startW=new MainWindow(this);
			    startW->show();
}

void start::on_pushButton_2_clicked()
{
	    this->close();
}

