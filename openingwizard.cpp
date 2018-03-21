#include "openingwizard.h"
#include "ui_openingwizard.h"

OpeningWizard::OpeningWizard(QWidget *parent) :
    QWizard(parent),
    ui(new Ui::OpeningWizard)
{
    ui->setupUi(this);
}

OpeningWizard::~OpeningWizard()
{
    delete ui;
}
