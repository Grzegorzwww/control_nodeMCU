#include "connection.h"

Connection::Connection(QWidget *parent): QWidget(parent)
{

    socket = new QUdpSocket(this);

}

Connection::~Connection(){
    socket->close();
    delete socket;

}

void Connection::sendData(QByteArray &data){
    data.clear();
    data = QByteArray("hello node MCU");
    socket->writeDatagram(data, data.size(), NODEMCU_IP_ADRESS,NODEMCU_SEND_PORT);
}


int Connection::readData(QByteArray &data){


}
