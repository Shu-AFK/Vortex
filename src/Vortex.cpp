#include "Vortex.h"
#include "./ui_vortex.h"

Vortex::Vortex(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Vortex)
{
    ui->setupUi(this);
}

Vortex::~Vortex()
{
    delete ui;
}
