#pragma once

#include <QWidget>

class Image : public QWidget
{
public:
    virtual std::pair<int, int> Draw(std::shared_ptr<QPainter> painter) = 0;
};