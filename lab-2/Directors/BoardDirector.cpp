#include "BoardDirector.h"

Board BoardDirector::SomeTaxiBoard(BoardBuilder* tbb)
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