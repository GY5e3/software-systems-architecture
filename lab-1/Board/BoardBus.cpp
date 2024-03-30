#include "BoardBus.h"

BoardBus::BoardBus()
{
    p_hasDriver = false;
    MAX_SIZE = 30;
}
bool BoardBus::BoardDriver(Driver driver)
{
    p_hasDriver = driver.GetCategory() == 'D';
    if (!p_hasDriver)
        std::cout << "ERROR: wrong category" << std::endl;
    return p_hasDriver;
}
bool BoardBus::BoardPassenger()
{
    if (p_passengers.size() < MAX_SIZE)
        p_passengers.push_back(Passenger("Passenger " + std::to_string(p_passengers.size() + 1)));
    else
        std::cerr << "ERROR: Trying to overload this bus" << std::endl;

    return p_passengers.size() <= MAX_SIZE;
}
void BoardBus::Go() {
    if(!p_hasDriver) {
        std::cout << "ERROR: miss the driver" << std::endl;
        return;
    }
    if(p_passengers.size() > 0) {
        std::cout << "ERROR: Can`t the ride without passengers" << std::endl;
    }
}
