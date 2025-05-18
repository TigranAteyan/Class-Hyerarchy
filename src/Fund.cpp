#include "Fund.h"
#include <iostream>

Fund::Fund(const std::string& name, const std::string& country, const std::string& reg)
    : NonCommercialOrganization(name, country, reg) {}

void Fund::printInfo() const {
    std::cout << "Fund: " << name << ", Country: " << country << ", Registration: " << registrationNumber << std::endl;
}

std::string Fund::getType() const {
    return "Fund";
}

std::string Fund::getSector() const {
    return "Charity";
}
