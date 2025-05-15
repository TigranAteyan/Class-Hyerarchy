#include "Organization.h"

Organization::Organization(const std::string& name, const std::string& country, const std::string& reg)
    : name(name), country(country), registrationNumber(reg) {}
std::string Organization::getCountry() const { return country; }
Organization::~Organization() {}