#ifndef GRAPHDIALOG_H
#define GRAPHDIALOG_H

#include <QDialog>

namespace Ui {
class GraphDialog;
}

class GraphDialog : public QDialog
{
    Q_OBJECT

public:
    explicit GraphDialog(QWidget *parent = 0);
    ~GraphDialog();

private:
    Ui::GraphDialog *ui;
};

#endif // GRAPHDIALOG_H
