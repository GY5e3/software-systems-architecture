#include <memory>

#include "Composite/Aircraft.hpp"
#include "Composite/EconomyClass.hpp"
#include "Composite/BusinessClass.hpp"
#include "Composite/FirstClass.hpp"

#include "Leaf/Pilot.hpp"
#include "Leaf/Stewardess.hpp"
#include "Leaf/Passenger.hpp"

const int MAX_WEIGHT_AIRCRAFT = 4300;

int main(int argc, char const *argv[])
{
    Aircraft aircraftClass;
    aircraftClass.Add(std::make_shared<Pilot>("Gustavo"));
    aircraftClass.Add(std::make_shared<Pilot>("Che Guevara"));

    aircraftClass.Add(std::make_shared<Stewardess>("Marie"));
    aircraftClass.Add(std::make_shared<Stewardess>("Yanness"));

    FirstClass firstClass;
    firstClass.Add(std::make_shared<Passenger>(59, "Corey Tailor"));

    BusinessClass businessClass;
    businessClass.Add(std::make_shared<Passenger>(30, "Mike Taison"));
    businessClass.Add(std::make_shared<Passenger>(3000, "Evrart Claire"));

    EconomyClass economyClass;
    for(int i = 0; i <= 150; i++) {
        economyClass.Add(std::make_shared<Passenger>(20, "Jorvanni Jorjio"));
    }
    aircraftClass.Add(std::make_shared<FirstClass>(firstClass));
    aircraftClass.Add(std::make_shared<BusinessClass>(businessClass));
    aircraftClass.Add(std::make_shared<EconomyClass>(economyClass));

    int boardBaggageWeight = aircraftClass.GetBaggageWeight();  
    std::cout << "Baggage weight for this board: " + std::to_string(boardBaggageWeight) << std::endl;
    int nowBaggageWeight = boardBaggageWeight;
    int index = economyClass.components.size() - 1;
    while(nowBaggageWeight > MAX_WEIGHT_AIRCRAFT && index >= 0) {
        nowBaggageWeight -= economyClass.components[index]->GetBaggageWeight();
        economyClass.components[index--]->SetBaggageWeight(0);
    }
    std::cout << "Baggage weight after reload: " + std::to_string(nowBaggageWeight) << std::endl;
    return 0;
}
//Паттерн Композит - структурный паттерн, используемый в тех случаях, когда программа или какая-то её часть 
//представима в виде древовидной структуры, состоящей из примитивных(Leaf) и сложных(Composite) объектов,
//взаимодействие с которыми осуществляется согласно одинаковому сценарию