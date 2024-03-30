#include "BusFactory.h"

BoardAnyCar* BusFactory::CreateBoard(){
    auto boardBus = new BoardBus();
    BusDriver busDriver;
    boardBus->BoardDriver(busDriver);
    boardBus->BoardPassenger();

    boardBus->Go();
    return boardBus;
}