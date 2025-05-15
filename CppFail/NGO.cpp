#include "NGO.h"
#include <iostream>
NGO::NGO(const std::string& name, const std::string& country, const std::string& reg)
    : NonProfitOrganization(name, country, reg) {}
void NGO::printInfo() const {
    std::cout << "NGO: " << name << ", Country: " << country << ", Reg#: " << registrationNumber << "\n";
}
std::string NGO::getType() const { return "NGO"; }