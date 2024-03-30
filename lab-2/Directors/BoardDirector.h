#pragma once

#include <memory>

#include "../Board/Board.h"
#include "../Builders/TaxiBoardBuilder.h"
#include "../Driver/TaxiDriver.h"
#include "../Driver/BusDriver.h"


class BoardDirector
{
public:
    Board SomeTaxiBoard(std::shared_ptr<BoardBuilder> tbb);
};