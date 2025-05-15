#include "CommercialOrganization.h"
CommercialOrganization::CommercialOrganization(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : Organization(name, country, reg), sector(sector) {}
std::string CommercialOrganization::getSector() const { return sector; }

