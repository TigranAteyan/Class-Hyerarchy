#include "NGO.h"
#include <iostream>

NGO::NGO(const std::string& name, const std::string& country, const std::string& reg)
    : NonCommercialOrganization(name, country, reg) {}

void NGO::printInfo() const {
    std::cout << "NGO: " << name << ", Country: " << country << ", Registration: " << registrationNumber << std::endl;
}

std::string NGO::getType() const {
    return "NGO";
}

std::string NGO::getSector() const {
    return "Social";
}
