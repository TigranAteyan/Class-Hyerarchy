#ifndef LLC_H
#define LLC_H
#include "CommercialOrganization.h"
class LLC : public CommercialOrganization {
public:
    LLC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector);
    void printInfo() const override;
    std::string getType() const override;
};
#endif