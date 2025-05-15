#include "EducationalInstitution.h"
#include <iostream>
EducationalInstitution::EducationalInstitution(const std::string& name, const std::string& country, const std::string& reg)
    : NonProfitOrganization(name, country, reg) {}
void EducationalInstitution::printInfo() const {
    std::cout << "Educational Institution: " << name << ", Country: " << country << ", Reg#: " << registrationNumber << "\n";
}
std::string EducationalInstitution::getType() const { return "Educational Institution"; }

