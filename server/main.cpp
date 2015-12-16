#include "qfmserver.h"
#include <QtCore>

int main(int argc, char *argv[])
{

    QCoreApplication  core(argc, argv);
    QFMServer server;
    //a.run();

    return core.exec();
}
