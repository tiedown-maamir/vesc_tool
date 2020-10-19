#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileDialog>

#include "vescinterface.h"
#include "vescconnection.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_connectAllButton_clicked();

    void on_updateAllButton_clicked();

    void on_disconnectAllButton_clicked();

    void on_configAllButton_clicked();

    void on_allButton_clicked();

private:

    void configureVesc(VescInterface* mVescInterface);
    void countDown();

    Ui::MainWindow *ui;

    QList<VescInterface*> mVescInterfaceList;
    QList<VSerialInfo_t> mPluggedInList;
    QList<VSerialInfo_t> mConnectedVescList;
    QList<QTimer*> mTimerList;

    QMap<QString, QString> com2usbMap;

    QTimer *allTimer = new QTimer(this);

    int reconnectCounter;
};

#endif // MAINWINDOW_H
