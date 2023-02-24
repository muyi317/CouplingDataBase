#include "widget.h"
#include "ui_widget.h"
#include <qfiledialog.h>
#include <qfile.h>
#include <qlabel.h>
#include <qdebug.h>
#include <mysql.h>

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);

	qDebug() << "tttttttttttt";

    ui->lbl_image->setPixmap(QPixmap(":/new/pic/BackGround.png"));

	MYSQL mysql; //一个数据库结构体
	MYSQL_RES* res; //一个结果集结构体
	MYSQL_ROW row; //char** 二维数组，存放一条条记录
	//初始化数据库
	mysql_init(&mysql);
	//设置编码方式
	mysql_options(&mysql, MYSQL_SET_CHARSET_NAME, "gbk");
	//连接数据库
	//判断如果连接失败就把连接失败的信息显示出来，我们好进行对应修改。
	// mysql_real_connect参数：2.本地地址 3.你的mysql用户名 4.你的mysql密码 5.数据库名字 6.端口号
	if (mysql_real_connect(&mysql, "localhost", "root", "114114", "myemployees", 3306, NULL, 0) == NULL) {
		qDebug() << (mysql_error(&mysql));
	}
	//查询数据
	mysql_query(&mysql, "SELECT * from employees");
	//获取结果集
	res = mysql_store_result(&mysql);
	//显示数据
	//给ROW赋值，判断ROW是否为空，不为空就打印数据。
	QString buff;

	while (row = mysql_fetch_row(res))
	{
		buff = buff + row[2] + '\t';

		ui->dbTextEdit->setText(row[1]);

		qDebug() << endl;
	}

	ui->textEdit->setText(buff);
	//释放结果集
	mysql_free_result(res);
	//关闭数据库
	mysql_close(&mysql);


    connect(ui->pushButton, &QPushButton::clicked, [=](){

        QString path = QFileDialog::getOpenFileName(this, "打开文件","L:\\Sacrif_L\\IMAGE\\W7_Off16");

        ui->lineEdit->setText(path);

        QFile file(path);
        file.open(QIODevice::ReadOnly);
        QByteArray array = file.readAll();

        ui->textEdit->setText(array);

    });
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_addBtn_clicked()
{
   
}

void Widget::on_tableWidget_cellClicked(int row, int column)
{

}
