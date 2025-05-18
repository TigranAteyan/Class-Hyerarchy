#ifndef CJSC_H
#define CJSC_H
#include "CommercialOrganization.h"
class CJSC : public CommercialOrganization {
public:
    CJSC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector);
    void printInfo() const override;
    std::string getType() const override;
};
#endif