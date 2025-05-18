#include "JSC.h"
#include <iostream>

JSC::JSC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : CommercialOrganization(name, country, reg, sector) {}

void JSC::printInfo() const {
    std::cout << "JSC: " << name << ", Country: " << country << ", Registration: " << registrationNumber << std::endl;
}

std::string JSC::getType() const {
    return "JSC";
}

std::string JSC::getSector() const {
    return "Business";
}
