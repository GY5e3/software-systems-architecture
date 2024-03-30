#include "BusBoardBuilder.h"

Board BusBoardBuilder::GetBoard(){ return board;}

BusBoardBuilder::BusBoardBuilder() {
    board.MAX_SIZE = 30;
}

void BusBoardBuilder::BuildDriver() {
    if(board.p_driver != nullptr) {
        std::cout << "Not more than 1 driver into transport!" << std::endl;
        return;
    }
    board.p_driver = new BusDriver;
}
void BusBoardBuilder::BuildPassenger() {
    if(board.p_passengers.size() == board.MAX_SIZE) {
        std::cout << "ERROR: Trying to overload this taxi" << std::endl;
        return;
    }
    BusPassenger passenger;
    board.p_passengers.push_back(&passenger);
}
