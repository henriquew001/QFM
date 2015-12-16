#ifndef QFMSERVER_H
#define QFMSERVER_H

#include <QtCore>

class QTcpServer;
class QNetworkSession;

class QFMServer : public QObject
{
    Q_OBJECT
public:
    explicit QFMServer(QObject *parent = 0);

signals:
    void finished();

public slots:
    void run();

private:
    QTcpServer *tcpServer;
    QNetworkSession *networkSession;
};

#endif // QFMSERVER_H
