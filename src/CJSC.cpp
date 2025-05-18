#include "CJSC.h"
#include <iostream>
CJSC::CJSC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : CommercialOrganization(name, country, reg, sector) {}
void CJSC::printInfo() const {
    std::cout << "CJSC: " << name << " (" << sector << "), Country: " << country << ", Reg#: " << registrationNumber << "\n";
}
std::string CJSC::getType() const { return "CJSC"; }
