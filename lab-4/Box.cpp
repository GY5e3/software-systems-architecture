#include "Box.hpp"

Box::Box(QWidget *parent) : QWidget(parent), p_image("_image.jpg") {}

void Box::paintEvent(QPaintEvent *) 
{
    std::shared_ptr<QPainter> painter = std::make_shared<QPainter>(this);
    std::pair<int, int> currBoxSize = p_image.Draw(painter);
    setFixedSize(currBoxSize.first, currBoxSize.second);
    update();
}
void Box::mousePressEvent(QMouseEvent *event) 
{
    if (event->button() == Qt::LeftButton)
    {
        p_startPos = event->globalPos() - this->pos();
    }
    if (event->buttons() & Qt::RightButton)
    {
        p_image.flag = true;
    }
    update();
}

void Box::mouseMoveEvent(QMouseEvent *event) 
{
    if (event->buttons() & Qt::LeftButton)
    {
        QPoint newPos = event->globalPos() - p_startPos;
        this->move(newPos);
    }
    update();
}