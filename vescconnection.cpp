#include "vescconnection.h"

QMap<QString, QString> VescConnection::mapCOM2USB(void) {

    QMap<QString, QString> COM2USBMap;
    const QString registryPath("HKEY_LOCAL_MACHINE\\SYSTEM\\CurrentControlSet\\Enum\\USB\\VID_0483&PID_5740");

    QSettings registry(registryPath, QSettings::NativeFormat);
    QStringList listedDevices = registry.childGroups();

    foreach(QString deviceUUID, listedDevices) {

        QString regEntryPath = registryPath + "\\" + deviceUUID;
        QSettings regEntry(regEntryPath, QSettings::NativeFormat);
        QString usbLocation = regEntry.value("LocationInformation").toString();

        QString deviceParametersPath = regEntryPath + "\\Device Parameters";
        QSettings deviceParameters(deviceParametersPath, QSettings::NativeFormat);
        QString portName = deviceParameters.value("PortName").toString();

        COM2USBMap.insert(portName, usbLocation);

    }

    return COM2USBMap;

}
