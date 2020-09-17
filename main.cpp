/*
    Copyright 2016 - 2019 Benjamin Vedder	benjamin@vedder.se

    This file is part of VESC Tool.

    VESC Tool is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    VESC Tool is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
    */

#include "mainwindow_depracated.h"
#include "mobile/qmlui.h"

#include <QApplication>
#include <QStyleFactory>
#include <QSettings>
#include <QDesktopWidget>
#include <QFontDatabase>

int main(int argc, char *argv[])
{
    // Settings
    QCoreApplication::setOrganizationName("Tie Down, Inc.");
    QCoreApplication::setOrganizationDomain("B3");
    QCoreApplication::setApplicationName("VESC Production Programmer");

    QApplication a(argc, argv);

    MainWindow w;
    w.show();

    return a.exec();
}
