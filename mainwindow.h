#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <openingwizard.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_openButton_clicked();

private:
    Ui::MainWindow *ui;
    OpeningWizard open;
};

#endif // MAINWINDOW_H
