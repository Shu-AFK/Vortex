#ifndef VORTEX_H
#define VORTEX_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class Vortex;
}
QT_END_NAMESPACE

class Vortex : public QMainWindow
{
    Q_OBJECT

public:
    Vortex(QWidget *parent = nullptr);
    ~Vortex();

private:
    Ui::Vortex *ui;
};
#endif // VORTEX_H
