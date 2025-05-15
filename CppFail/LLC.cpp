#include "LLC.h"
#include <iostream>
LLC::LLC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : CommercialOrganization(name, country, reg, sector) {}
void LLC::printInfo() const {
    std::cout << "LLC: " << name << " (" << sector << "), Country: " << country << ", Reg#: " << registrationNumber << "\n";
}
std::string LLC::getType() const { return "LLC"; }
