#ifndef COMMERCIALORGANIZATION_H
#define COMMERCIALORGANIZATION_H
#include "Organization.h"
class CommercialOrganization : public Organization {
protected:
    std::string sector;
public:
    CommercialOrganization(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector);
    std::string getSector() const;
};
#endif