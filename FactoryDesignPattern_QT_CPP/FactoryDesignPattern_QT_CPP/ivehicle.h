#ifndef IVEHICLE_H
#define IVEHICLE_H

#include "iostream"

//First we need to create our interface class to derive other classes.
class IVehicle
{
public:
    IVehicle() { }
    ~IVehicle(){ }
    bool GetVehicleReady();
    void StartVehicle();
    void StopVehicle();
};

#endif // IVEHICLE_H
