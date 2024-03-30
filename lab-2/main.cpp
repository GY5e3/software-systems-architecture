#include "Directors/BoardDirector.h"
#include "Builders/TaxiBoardBuilder.h"
#include "Builders/BoardBuilder.h"
#include "Builders/BusBoardBuilder.h"

int main(int argc, char const *argv[])
{
    BoardDirector bd;
    BusBoardBuilder tb;
    bd.SomeTaxiBoard(&tb);
    return 0;
}
