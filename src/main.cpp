#include "Vortex.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Vortex w;
    w.show();
    return a.exec();
}
