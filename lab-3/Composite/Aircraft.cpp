#include "Aircraft.hpp"

void Aircraft::Add(std::shared_ptr<BoardComponent> component) {
    if(components.size() < p_maxCapacity)
        components.push_back(component);
    else
        std::cout << "Trying to overload this aircraft class!" << std::endl;
}

void Aircraft::Remove(std::shared_ptr<BoardComponent> component) {
    for(int i = 0; i < components.size(); i++) {
        if(components[i] == component)
            components.erase(components.begin() + i);
    }
}

int Aircraft::GetBaggageWeight() {
    int totalBaggageWeight = 0;
    for(auto passenger : components) {
        totalBaggageWeight += passenger->GetBaggageWeight();
    }
    return totalBaggageWeight;
}
