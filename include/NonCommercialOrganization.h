#ifndef NONCOMMERCIALORGANIZATION_H
#define NONCOMMERCIALORGANIZATION_H
#include "Organization.h"

class NonCommercialOrganization : public Organization {
protected:
    double donationTotal = 0.0;
public:
    NonCommercialOrganization(const std::string& name, const std::string& country, const std::string& reg);

    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
    bool isCommercial () const override;

    double getDonationTotal() const;
    void addDonation(double amount);
};

#endif
