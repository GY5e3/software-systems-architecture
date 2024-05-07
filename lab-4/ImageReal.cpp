#include "ImageReal.hpp"

ImageReal::ImageReal(const QString &filename) : p_filename(filename) {}

std::pair<int, int> ImageReal::Draw(std::shared_ptr<QPainter> painter)
    {
        QImage qImage(p_filename);
        painter->drawPixmap(0, 0, QPixmap(p_filename));
        return {qImage.width(), qImage.height()};
    };