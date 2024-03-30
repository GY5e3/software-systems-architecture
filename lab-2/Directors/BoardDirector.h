#pragma once

#include "../Board/Board.h"
#include "../Builders/TaxiBoardBuilder.h"
#include "../Driver/TaxiDriver.h"
#include "../Driver/BusDriver.h"


class BoardDirector
{
public:
    Board SomeTaxiBoard(BoardBuilder* tbb);
};