#include "BoardDirector.h"

Board BoardDirector::SomeTaxiBoard(std::shared_ptr<BoardBuilder> tbb)
{
    tbb->BuildDriver();
    tbb->BuildPassenger();
    tbb->BuildPassenger();
    tbb->BuildPassenger();
    tbb->BuildPassenger();
    tbb->BuildPassenger();
    tbb->BuildBabySeat();
    return tbb->GetBoard();
}