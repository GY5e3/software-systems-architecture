#include "Passenger.hpp"

Passenger::Passenger(int baggageWeight, std::string name) : p_baggageWeight(baggageWeight),
                                                            p_name(name) {}

int Passenger::GetBaggageWeight() { return p_baggageWeight; }

void Passenger::SetBaggageWeight(int weight) { p_baggageWeight = weight; }