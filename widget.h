#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <qsqldatabase.h>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_addBtn_clicked();

    void on_tableWidget_cellClicked(int row, int column);

private:
    Ui::Widget *ui;
};
#endif // WIDGET_H
