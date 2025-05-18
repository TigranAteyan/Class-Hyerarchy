#include "LLC.h"
#include <iostream>

#include "LLC.h"

LLC::LLC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : CommercialOrganization(name, country, reg, sector) {}


void LLC::printInfo() const {
    std::cout << "LLC: " << name << ", Country: " << country << ", Registration: " << registrationNumber << std::endl;
}

std::string LLC::getType() const {
    return "LLC";
}

std::string LLC::getSector() const {
    return "Business";
}
