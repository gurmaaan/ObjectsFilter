#ifndef OPENINGWIZARD_H
#define OPENINGWIZARD_H

#include <QWizard>

namespace Ui {
class OpeningWizard;
}

class OpeningWizard : public QWizard
{
    Q_OBJECT

public:
    explicit OpeningWizard(QWidget *parent = 0);
    ~OpeningWizard();

private:
    Ui::OpeningWizard *ui;
};

#endif // OPENINGWIZARD_H
