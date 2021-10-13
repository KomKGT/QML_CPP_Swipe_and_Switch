#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    root_objectSW = ui->quickWidget->rootObject();
    connect(root_objectSW,SIGNAL(checker(bool)),
            this,SLOT(onSwitchClicked(bool)));

    root_objectBTN = ui->quickWidget->rootObject();
    connect(root_objectBTN,SIGNAL(btnPress(bool)),
            this,SLOT(onButtonClicked(bool)));
}

Widget::~Widget()
{
    delete ui;
}
void Widget::onSwitchClicked(bool checked)
{
    if(checked == true)
        qDebug() << "Switch ON";
    else
        qDebug() << "Switch OFF";

}

void Widget::onButtonClicked(bool checked)
{
    if(checked == true)
        qDebug() << "Button ON";
    else
        qDebug() << "Button OFF";
}
