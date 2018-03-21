#ifndef IMAGEVIEWERWIDGET_H
#define IMAGEVIEWERWIDGET_H

#include <QWidget>

namespace Ui {
class ImageViewerWidget;
}

class ImageViewerWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ImageViewerWidget(QWidget *parent = 0);
    ~ImageViewerWidget();

private:
    Ui::ImageViewerWidget *ui;
};

#endif // IMAGEVIEWERWIDGET_H
