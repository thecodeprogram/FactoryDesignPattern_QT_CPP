#ifndef CAR_H
#define CAR_H

#include "ivehicle.h"
#include "iostream"

class Car : public IVehicle
{
public:
    Car();
    virtual ~Car(){ std::cout << "Destructor of Car" << std::endl << "-----------------------------------" << std::endl; }
    bool GetVehicleReady(){std::cout << "Car is ready" << std::endl; return true; }
    void StartVehicle(){ std::cout << "Car has been started" << std::endl; }
    void StopVehicle(){ std::cout << "Car has been stopped" << std::endl; }

    static IVehicle * __stdcall Initialize() { return new Car(); }
};

#endif // CAR_H
