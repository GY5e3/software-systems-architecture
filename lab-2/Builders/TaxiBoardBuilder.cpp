#include "TaxiBoardBuilder.h"

Board TaxiBoardBuilder::GetBoard() { return board; }

TaxiBoardBuilder::TaxiBoardBuilder()
{
    board.MAX_SIZE = 4;
}

void TaxiBoardBuilder::BuildDriver() {
    if(board.p_driver != nullptr) {
        std::cout << "Not more than 1 driver into transport!" << std::endl;
        return;
    }
    board.p_driver = new TaxiDriver;
}
void TaxiBoardBuilder::BuildPassenger() {
    if(board.p_passengers.size() == board.MAX_SIZE) {
        std::cout << "ERROR: Trying to overload this taxi" << std::endl;
        return;
    }
    TaxiPassenger passenger;
    board.p_passengers.push_back(&passenger);
}
void TaxiBoardBuilder::BuildBabySeat() {
    board.needBabySeat = true;
}