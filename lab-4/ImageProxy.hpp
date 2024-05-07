#pragma once

#include <QPainter>

#include "Image.hpp"
#include "ImageReal.hpp"

class ImageProxy : public Image
{

public:
    bool flag = false;

    ImageProxy(const QString &filename);

    std::pair<int, int> Draw(std::shared_ptr<QPainter> painter) override;

private:
    ImageReal p_realImage;
    QString p_filename;
};