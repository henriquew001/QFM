#ifndef QFMMAINWINDOW_H
#define QFMMAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class QFMMainWindow;
}

class QFMMainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit QFMMainWindow(QWidget *parent = 0);
    ~QFMMainWindow();

private:
    Ui::QFMMainWindow *ui;
};

#endif // QFMMAINWINDOW_H
