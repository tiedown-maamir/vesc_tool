#ifndef VESCCONNECTION_H
#define VESCCONNECTION_H

#include <QObject>
#include <QMap>
#include <vescinterface.h>

namespace VescConnection {

QMap<QString, QString> mapCOM2USB(void);

}

#endif // VESCCONNECTION_H
