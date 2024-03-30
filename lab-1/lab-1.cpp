#include <iostream>
#include <vector>

#include "AbstractFactory/BusFactory.h"
#include "AbstractFactory/TaxiFactory.h"

#include "Driver/BusDriver.h"
#include "Driver/TaxiDriver.h"

int main(int argc, char const *argv[])
{
    BusFactory busFactory;
    auto busBoard = busFactory.CreateBoard();

    TaxiFactory taxiFactory;
    auto taxiBoard = taxiFactory.CreateBoard();
    /*

    BusDriver busDriver;
    busBoard->BoardDriver(busDriver);
    busBoard->BoardPassenger();


    TaxiDriver taxiDriver;
    taxiBoard->BoardDriver(taxiDriver);

    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    */
    return 0;
}
// Абстрактная фабрика - порождающий шаблон проектирования, который повзволяет разделить реализацию семейства взаимосвязных объектов