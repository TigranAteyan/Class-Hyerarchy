#ifndef EDUCATIONALINSTITUTION_H
#define EDUCATIONALINSTITUTION_H
#include "NonProfitOrganization.h"
class EducationalInstitution : public NonProfitOrganization {
public:
    EducationalInstitution(const std::string& name, const std::string& country, const std::string& reg);
    void printInfo() const override;
    std::string getType() const override;
};
#endif
