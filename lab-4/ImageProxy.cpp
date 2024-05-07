#include "ImageProxy.hpp"

ImageProxy::ImageProxy(const QString &filename) : p_filename(filename), p_realImage(filename) {}

std::pair<int, int> ImageProxy::Draw(std::shared_ptr<QPainter> painter)
{
    QImage qImage(p_filename);
    if (!flag)
    {
        painter->drawRect(0, 0, qImage.width(), qImage.height());
    }
    else
    {
        p_realImage.Draw(painter);
    }
    return {qImage.width(), qImage.height()};
}