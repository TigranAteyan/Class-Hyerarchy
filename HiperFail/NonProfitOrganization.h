#ifndef NONPROFITORGANIZATION_H
#define NONPROFITORGANIZATION_H
#include "Organization.h"
class NonProfitOrganization : public Organization {
public:
    NonProfitOrganization(const std::string& name, const std::string& country, const std::string& reg);
};
#endif
