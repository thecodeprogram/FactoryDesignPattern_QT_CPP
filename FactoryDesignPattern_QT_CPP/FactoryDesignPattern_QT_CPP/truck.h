#ifndef TRUCK_H
#define TRUCK_H

#include "ivehicle.h"
#include "iostream"

class Truck : public IVehicle
{
public:
    Truck();
    virtual ~Truck(){ std::cout << "Destructor of Truck" << std::endl << "-----------------------------------" << std::endl;  }
    bool GetVehicleReady(){std::cout << "Truck is ready" << std::endl; return true; }
    void StartVehicle(){ std::cout << "Truck has been started" << std::endl; }
    void StopVehicle(){ std::cout << "Truck has been stopped" << std::endl; }

    static IVehicle * __stdcall Initialize() { return new Truck(); }
};

#endif // TRUCK_H
