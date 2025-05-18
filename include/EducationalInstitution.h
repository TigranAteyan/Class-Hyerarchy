#ifndef EDUCATIONALINSTITUTION_H
#define EDUCATIONALINSTITUTION_H

#include "NonCommercialOrganization.h"

class EducationalInstitution : public NonCommercialOrganization {
public:
    EducationalInstitution(const std::string& name, const std::string& country, const std::string& reg);

    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
};

#endif
