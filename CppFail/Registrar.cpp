#include "Registrar.h"
#include "CommercialOrganization.h"
#include <iostream>
Registrar::~Registrar() {
    for (size_t i = 0; i < registry.size(); ++i)
        delete registry[i];
}
void Registrar::registerOrganization(Organization* org) {
    registry.push_back(org);
}
void Registrar::printAll() const {
    for (size_t i = 0; i < registry.size(); ++i)
        registry[i]->printInfo();
}
void Registrar::printByType(const std::string& type) const {
    for (size_t i = 0; i < registry.size(); ++i)
        if (registry[i]->getType() == type)
            registry[i]->printInfo();
}
void Registrar::printByCountry(const std::string& country) const {
    for (size_t i = 0; i < registry.size(); ++i)
        if (registry[i]->getCountry() == country)
            registry[i]->printInfo();
}
void Registrar::printBySector(const std::string& sector) const {
    for (size_t i = 0; i < registry.size(); ++i) {
        CommercialOrganization* co = dynamic_cast<CommercialOrganization*>(registry[i]);
        if (co != NULL && co->getSector() == sector)
            co->printInfo();
    }
}