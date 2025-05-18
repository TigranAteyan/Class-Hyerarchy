#include "CommercialOrganization.h"
#include <iostream>

CommercialOrganization::CommercialOrganization(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector)
    : Organization(name, country, reg), sector(sector) {}

void CommercialOrganization::printInfo() const {
    std::cout << "Commercial Organization: " << name << ", Country: " << country << ", Sector: " << sector << std::endl;
}

std::string CommercialOrganization::getType() const { return "Commercial"; }

std::string CommercialOrganization::getSector() const { return sector; }

bool CommercialOrganization::isCommercial() const {  return true; }

void CommercialOrganization::addShareholder(Shareholder* shareholder) {
    shareholders.push_back(shareholder);
}

void CommercialOrganization::removeShareholder(const Shareholder& shareholder) {
    for (auto it = shareholders.begin(); it != shareholders.end(); ++it) {
        if ((*it)->equals(shareholder)) {
            shareholders.erase(it);
            break;
        }
    }
}

Shareholder* CommercialOrganization::findShareholderByPassport(const std::string& passportNumber) {
    for (Shareholder* s : shareholders) {
        if (s->getPassportNumber() == passportNumber)
            return s;
    }
    return nullptr;
}

void CommercialOrganization::printShareholders() const {
    for (Shareholder* s : shareholders) {
        std::cout << s->toString() << std::endl;
    }
}
