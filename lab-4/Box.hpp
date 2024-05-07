#pragma once

#include <QWidget>
#include <QMouseEvent>

#include "ImageProxy.hpp"

class Box : public QWidget
{
public:
    Box(QWidget *parent = nullptr);
protected:
    void paintEvent(QPaintEvent *) override;

    void mousePressEvent(QMouseEvent *event) override;

    void mouseMoveEvent(QMouseEvent *event) override;

private:
    ImageProxy p_image;
    QPoint p_startPos;
};