/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QPushButton *pushButton;
    QTextEdit *textEdit;
    QPushButton *addBtn;
    QPushButton *showBtn;
    QTextEdit *dbTextEdit;
    QWidget *widget;
    QGridLayout *gridLayout;
    QLabel *label;
    QLineEdit *nameLineEdit;
    QLabel *label_2;
    QLineEdit *ageLineEdit;
    QLabel *label_3;
    QLineEdit *genderLineEdit;
    QTableWidget *tableWidget;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(1024, 768);
        Widget->setMinimumSize(QSize(1024, 768));
        Widget->setMaximumSize(QSize(1024, 768));
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(420, 30, 431, 20));
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(870, 30, 75, 23));
        textEdit = new QTextEdit(Widget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(420, 60, 531, 421));
        addBtn = new QPushButton(Widget);
        addBtn->setObjectName(QString::fromUtf8("addBtn"));
        addBtn->setGeometry(QRect(400, 610, 75, 23));
        showBtn = new QPushButton(Widget);
        showBtn->setObjectName(QString::fromUtf8("showBtn"));
        showBtn->setGeometry(QRect(640, 650, 75, 23));
        dbTextEdit = new QTextEdit(Widget);
        dbTextEdit->setObjectName(QString::fromUtf8("dbTextEdit"));
        dbTextEdit->setGeometry(QRect(610, 520, 151, 121));
        widget = new QWidget(Widget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 570, 187, 90));
        gridLayout = new QGridLayout(widget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label = new QLabel(widget);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout->addWidget(label, 0, 0, 1, 2);

        nameLineEdit = new QLineEdit(widget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        gridLayout->addWidget(nameLineEdit, 0, 2, 1, 1);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 1, 0, 1, 2);

        ageLineEdit = new QLineEdit(widget);
        ageLineEdit->setObjectName(QString::fromUtf8("ageLineEdit"));

        gridLayout->addWidget(ageLineEdit, 1, 2, 1, 1);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        genderLineEdit = new QLineEdit(widget);
        genderLineEdit->setObjectName(QString::fromUtf8("genderLineEdit"));

        gridLayout->addWidget(genderLineEdit, 2, 2, 1, 1);

        tableWidget = new QTableWidget(Widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(60, 200, 256, 192));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QCoreApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QCoreApplication::translate("Widget", "PushButton", nullptr));
        addBtn->setText(QCoreApplication::translate("Widget", "\346\267\273\345\212\240", nullptr));
        showBtn->setText(QCoreApplication::translate("Widget", "\346\230\276\347\244\272", nullptr));
        label->setText(QCoreApplication::translate("Widget", "\345\247\223\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("Widget", "\345\271\264\351\276\204", nullptr));
        label_3->setText(QCoreApplication::translate("Widget", "\346\200\247\345\210\253", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
