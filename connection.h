#ifndef CONNECTION_H
#define CONNECTION_H

#include <QWidget>
#include <QUdpSocket>
#include <QHostAddress>


static const QHostAddress NODEMCU_IP_ADRESS = QHostAddress("127.0.0.1");
static const  quint16 NODEMCU_SEND_PORT = 1234;
static const  quint16 NODEMCU_RECIVE_PORT = 1236;


class Connection : public QWidget
{
    Q_OBJECT



public:
    Connection(QWidget *parent);
    ~Connection();

    void sendData(QByteArray &data);
    int readData(QByteArray &data);


private:
    QUdpSocket * socket;


};

#endif // CONNECTION_H
