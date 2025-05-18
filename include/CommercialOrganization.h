#ifndef COMMERCIALORGANIZATION_H
#define COMMERCIALORGANIZATION_H
#include "Organization.h"
#include "Shareholder.h"
#include <vector>

class CommercialOrganization : public Organization {
protected:
    std::string sector;
    std::vector<Shareholder*> shareholders;
public:
    CommercialOrganization(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector);

    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
    bool isCommercial () const override;

    void addShareholder(Shareholder* shareholder);
    void removeShareholder(const Shareholder& shareholder);
    Shareholder* findShareholderByPassport(const std::string& passportNumber);
    void printShareholders() const;
};

#endif
