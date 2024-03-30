#include <memory>

#include "Directors/BoardDirector.h"
#include "Builders/TaxiBoardBuilder.h"
#include "Builders/BoardBuilder.h"
#include "Builders/BusBoardBuilder.h"


int main(int argc, char const *argv[])
{
    BoardDirector bd;
    std::shared_ptr<BoardBuilder> tb = std::make_shared<TaxiBoardBuilder>();

    bd.SomeTaxiBoard(tb);
    return 0;
}
