#ifndef FUND_H
#define FUND_H

#include "NonCommercialOrganization.h"

class Fund : public NonCommercialOrganization {
public:
    Fund(const std::string& name, const std::string& country, const std::string& reg);

    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
};

#endif
