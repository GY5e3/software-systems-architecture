#include "TaxiBoardBuilder.h"

Board TaxiBoardBuilder::GetBoard() { return board; }

TaxiBoardBuilder::TaxiBoardBuilder()
{
    board.MAX_SIZE = 4;
}

void TaxiBoardBuilder::BuildDriver() {
    if(board.driver != nullptr) {
        std::cout << "Not more than 1 driver into transport!" << std::endl;
        return;
    }
    board.driver = std::make_shared<TaxiDriver>();
}
void TaxiBoardBuilder::BuildPassenger() {
    if(board.passengers.size() == board.MAX_SIZE) {
        std::cout << "ERROR: Trying to overload this taxi" << std::endl;
        return;
    }
    std::shared_ptr<Passenger> passenger = std::make_shared<TaxiPassenger>();
    board.passengers.push_back(std::move(passenger));
}
void TaxiBoardBuilder::BuildBabySeat() {
    board.needBabySeat = true;
}