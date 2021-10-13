#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QQuickItem>
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
    void onSwitchClicked(bool checked);

    void onButtonClicked(bool checked);
private:
    Ui::Widget *ui;


    QQuickItem *root_objectSW;

    QQuickItem *root_objectBTN;
};
#endif // WIDGET_H
