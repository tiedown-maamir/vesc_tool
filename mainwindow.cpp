#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMap>
#include <QSerialPort>
#include <QSerialPortInfo>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_connectAllButton_clicked()
{
    com2usbMap = VescConnection::mapCOM2USB();

    foreach(QString comPortName, com2usbMap.keys()) {

        QSerialPortInfo comPortInfo = QSerialPortInfo(comPortName);

        // Check if Vesc

        if (comPortInfo.manufacturer().startsWith("STMicroelectronics")) {

            VescInterface * mVescInterface = new VescInterface(this);

            if (mVescInterface->connectSerial(comPortInfo.systemLocation())) {

                mVescInterfaceList.append(mVescInterface);
                ui->connectLog->appendPlainText(comPortName);
                ui->connectLog->appendPlainText(com2usbMap.value(comPortName));
                ui->connectLog->insertPlainText(" connection successful\n ");

            } else {

                ui->connectLog->appendPlainText(comPortName);
                ui->connectLog->appendPlainText(com2usbMap.value(comPortName));
                ui->connectLog->insertPlainText(" connection failed\n ");
            }


        } else {

            ui->connectLog->appendPlainText(comPortName);
            ui->connectLog->insertPlainText(" Not a VESC\n ");

        }
    }
}

void MainWindow::on_updateAllButton_clicked()
{

    bool isBootloader = false;
    bool allOverCan = false;

    QDir firmwareDirectory("C:\\GitHub\\vesc_tool\\res\\firmwares\\60");
    QFile file;
    QByteArray firmwareData;

    firmwareDirectory.setCurrent("C:\\GitHub\\vesc_tool\\res\\firmwares\\60");

    file.setFileName("VESC_default.bin");
    file.open(QIODevice::ReadOnly);
    firmwareData = file.readAll();

    foreach(VescInterface* mVescInterface, mVescInterfaceList) {

        ui->updateLog->insertPlainText("\nPort: ");
        ui->updateLog->insertPlainText(QString(mVescInterface->getConnectedPortName()));
        ui->updateLog->insertPlainText(com2usbMap.value(mVescInterface->getConnectedPortName()));
        ui->updateLog->insertPlainText("\nFirmwareUploadStarted");

        bool fwUploadSuccessful = mVescInterface->fwUpload(firmwareData, isBootloader, allOverCan);

        if (fwUploadSuccessful) {


            ui->updateLog->insertPlainText("\nFW upload successful: ");
            ui->updateLog->insertPlainText(QString::number(fwUploadSuccessful));

        } else {
            ui->updateLog->insertPlainText("FW Upload failed.");
        }

        mVescInterface->disconnectPort();

    }

    ui->updateLog->insertPlainText("Wait 10 seconds to upload config");

    file.close();
}


void MainWindow::on_disconnectAllButton_clicked()
{
    foreach(VescInterface* mVescInterface, mVescInterfaceList) {
        ui->disconnectLog->insertPlainText(mVescInterface->getConnectedPortName());
        mVescInterface->disconnectPort();
        ui->disconnectLog->insertPlainText(": Disconnected");
    }

    mVescInterfaceList.clear();
}


void MainWindow::on_configAllButton_clicked()
{

    QString mConfigPath = "C:/GitHub/VESC_Parameters/MotorConfig.xml";
    QString appConfigPath = "C:/GitHub/VESC_Parameters/AppConfig.xml";


    com2usbMap = VescConnection::mapCOM2USB();

    foreach(VescInterface* mVescInterface, mVescInterfaceList) {

            if (mVescInterface->autoconnect()) {

                ui->configLog->appendPlainText(mVescInterface->getConnectedPortName());
                ui->configLog->appendPlainText(com2usbMap.value(mVescInterface->getConnectedPortName()));
                ui->configLog->insertPlainText(" connection successful\n ");

                bool mConfLoaded = mVescInterface->mcConfig()->loadXml(mConfigPath, "MCConfiguration");
                if (mConfLoaded){

                    ui->configLog->appendPlainText("Motor Configuration Loaded");
                    mVescInterface->commands()->setMcconf();
                    ui->configLog->appendPlainText("Motor Configuration Written Successfully!");

                  }
                else {
                    ui->configLog->appendPlainText("Motor Configuration Can't Be Loaded!");
                  }

                bool appConfLoaded = mVescInterface->appConfig()->loadXml(appConfigPath, "APPConfiguration");
                if (appConfLoaded){
                    ui->configLog->appendPlainText("App Configuration Loaded");

                    mVescInterface->commands()->setAppConf();
                    ui->configLog->appendPlainText("App Configuration Written Successfully!");

                  }
                else {
                    ui->configLog->appendPlainText("App Configuration Can't Be Loaded!");
                  }


            } else {

                //ui->configLog->appendPlainText(comPortName);
                //ui->configLog->appendPlainText(com2usbMap.value(comPortName));
                ui->configLog->insertPlainText(" connection failed\n ");
            }

    }
}
