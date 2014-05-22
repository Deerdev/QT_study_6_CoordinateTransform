#include "paintedwidget.h"
#include <QPainter>


PaintedWidget::PaintedWidget(QWidget *parent) :
    QWidget(parent)
{
    resize(400,400);
    setWindowTitle(tr("Paint Demo"));
}

//绘画文字
void PaintedWidget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    QFont font("Courier", 24);                  //定义字体
    painter.setFont(font);                      //设置定义的字体
    painter.drawText(50,50,"Hello, World!");    //绘画文字 painter.drawText()
    QTransform transform;                       //定义一个变换
    transform.rotate(+45.0);                    //旋转世界坐标系,旋转坐标系,不是旋转text内容
                                                //顺时针旋转45度
    painter.setWorldTransform(transform);       //使用这个(旋转)变换设置了QPainter的世界坐标系
    painter.drawText(60,60,"Hello, World!");
}

PaintedWidget::~PaintedWidget()
{

}
