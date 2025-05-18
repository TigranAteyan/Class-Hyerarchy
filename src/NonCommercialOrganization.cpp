#include "NonCommercialOrganization.h"
#include <iostream>

NonCommercialOrganization::NonCommercialOrganization(const std::string& name, const std::string& country, const std::string& reg)
    : Organization(name, country, reg) {}

void NonCommercialOrganization::printInfo() const {
    std::cout << "Non-Commercial Organization: " << name << ", Country: " << country << ", Donations: " << donationTotal << std::endl;
}

std::string NonCommercialOrganization::getType() const {
    return "Non-Commercial";
}

std::string NonCommercialOrganization::getSector() const {
    return "N/A";
}

bool NonCommercialOrganization::isCommercial() const {
    return false;
}

double NonCommercialOrganization::getDonationTotal() const {
    return donationTotal;
}

void NonCommercialOrganization::addDonation(double amount) {
    if (amount > 0) {
        donationTotal += amount;
    }
}
