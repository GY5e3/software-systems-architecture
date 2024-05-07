#pragma once

#include <QPixmap>
#include <QPainter>

#include <memory>

#include "Image.hpp"

class ImageReal : public Image
{
public:
    ImageReal(const QString &filename);

    std::pair<int, int> Draw(std::shared_ptr<QPainter> painter) override;
private:
    QString p_filename;
};