#include "imageviewerwidget.h"
#include "ui_imageviewerwidget.h"

ImageViewerWidget::ImageViewerWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ImageViewerWidget)
{
    ui->setupUi(this);
}

ImageViewerWidget::~ImageViewerWidget()
{
    delete ui;
}
