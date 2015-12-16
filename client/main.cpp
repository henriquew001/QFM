#include "qfmmainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFMMainWindow w;
    w.show();

    return a.exec();
}
