#include "BusBoardBuilder.h"

Board BusBoardBuilder::GetBoard(){ return board;}

BusBoardBuilder::BusBoardBuilder() {
    board.MAX_SIZE = 30;
}

void BusBoardBuilder::BuildDriver() {
    if(board.driver != nullptr) {
        std::cout << "Not more than 1 driver into transport!" << std::endl;
        return;
    }
    board.driver = std::make_shared<BusDriver>();
}
void BusBoardBuilder::BuildPassenger() {
    if(board.passengers.size() == board.MAX_SIZE) {
        std::cout << "ERROR: Trying to overload this taxi" << std::endl;
        return;
    }
    std::shared_ptr<Passenger> passenger = std::make_shared<BusPassenger>();
    board.passengers.push_back(std::move(passenger));
}
