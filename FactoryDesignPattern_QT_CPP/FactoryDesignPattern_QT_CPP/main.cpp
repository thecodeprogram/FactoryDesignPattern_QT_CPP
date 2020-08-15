#include <QCoreApplication>

#include "ivehicle.h"
#include "car.h"
#include "truck.h"

#include <iostream>
using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    system("title Factory Design Pattern Example - Thecodeprogram");
    cout << "Welcome Factory Design Pattern Example in QT C++" << endl << endl;

    IVehicle vehicle;
    vehicle = Car();

    vehicle = Truck();

    return a.exec();
}
