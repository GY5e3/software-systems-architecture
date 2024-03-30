#include "BoardTaxi.h"

BoardTaxi::BoardTaxi()
{
    p_hasDriver = false;
    MAX_SIZE = 4;
}

bool BoardTaxi::BoardDriver(Driver driver)
{
    p_hasDriver = driver.GetCategory() == 'B';
    if (!p_hasDriver)
        std::cout << "ERROR: wrong category" << std::endl;
    return p_hasDriver;
}

bool BoardTaxi::BoardPassenger()
{
    if (p_passengers.size() < MAX_SIZE)
        p_passengers.push_back(Passenger("Passenger " + std::to_string(p_passengers.size() + 1)));
    else
        std::cerr << "ERROR: Trying to overload this taxi" << std::endl;

    return p_passengers.size() <= MAX_SIZE;
}
void BoardTaxi::Go() {
    if(!p_hasDriver) {
        std::cout << "ERROR: miss the driver" << std::endl;
        return;
    }
    if(p_passengers.size() > 0) {
        std::cout << "ERROR: Can`t the ride without passengers" << std::endl;
    }
}