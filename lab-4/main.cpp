#include <QApplication>
#include <QVBoxLayout>

#include <memory>

#include "Box.hpp"

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QWidget window;
    window.setWindowTitle("Ergo Proxy");
    window.resize(1280, 720);
    QVBoxLayout layout(&window);

    Box *box = new Box();
    layout.addWidget(box);

    window.show();
    return app.exec();
}