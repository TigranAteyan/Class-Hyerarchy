#include "Fund.h"
#include <iostream>
Fund::Fund(const std::string& name, const std::string& country, const std::string& reg)
    : NonProfitOrganization(name, country, reg) {}
void Fund::printInfo() const {
    std::cout << "Fund: " << name << ", Country: " << country << ", Reg#: " << registrationNumber << "\n";
}
std::string Fund::getType() const { return "Fund"; }

