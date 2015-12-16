#include "qfmserver.h"
#include <QDebug>
#include <QSharedPointer>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QNetworkSession>

QFMServer::QFMServer(QObject *parent) : QObject(parent)
{
    tcpServer = new QTcpServer(this);
    if(!tcpServer->listen()) {
        qDebug() << tr("Unable to start server: %1.").arg(tcpServer->errorString());
        return;
    }

    QString ipAddress;
    QList<QHostAddress> ipAddressesList = QNetworkInterface::allAddresses();
    // use the first non-localhost IPv4 address
    for (int i = 0; i < ipAddressesList.size(); i++) {
        if (ipAddressesList.at(i) != QHostAddress::LocalHost && ipAddressesList.at(i).toIPv4Address()) {
            ipAddress = ipAddressesList.at(i).toString();
            break;
        }
    }
    if (ipAddress.isEmpty())
        ipAddress = QHostAddress(QHostAddress::LocalHost).toString();
    qDebug() << tr("The QFM Server is running on\n\nIP: %1\nport: %2\n\n").arg(ipAddress).arg(tcpServer->serverPort());
}

void QFMServer::run()
{
    qDebug() << "Hello World from the Event Loop" << endl;
    emit finished();
}
