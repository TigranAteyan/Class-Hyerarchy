#include "EducationalInstitution.h"
#include <iostream>

EducationalInstitution::EducationalInstitution(const std::string& name, const std::string& country, const std::string& reg)
    : NonCommercialOrganization(name, country, reg) {}

void EducationalInstitution::printInfo() const {
    std::cout << "Educational Institution: " << name << ", Country: " << country << ", Registration: " << registrationNumber << std::endl;
}

std::string EducationalInstitution::getType() const {
    return "Educational Institution";
}

std::string EducationalInstitution::getSector() const {
    return "Education";
}
