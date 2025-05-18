#ifndef NGO_H
#define NGO_H

#include "NonCommercialOrganization.h"

class NGO : public NonCommercialOrganization {
public:
    NGO(const std::string& name, const std::string& country, const std::string& reg);

    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
};

#endif
