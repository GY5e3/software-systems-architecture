#include "TaxiFactory.h"

BoardAnyCar *TaxiFactory::CreateBoard()
{
    auto taxiBoard = new BoardTaxi();
    TaxiDriver taxiDriver;
    taxiBoard->BoardDriver(taxiDriver);

    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();
    taxiBoard->BoardPassenger();

    taxiBoard->Go();
    return taxiBoard;
}