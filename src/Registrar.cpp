#include "Registrar.h"
#include <iostream>
#include <algorithm>

Registrar::~Registrar() {
    clear();
}

void Registrar::registerOrganization(Organization* org) {
    registry.push_back(org);
}

void Registrar::printAll() const {
    for (const Organization* org : registry) {
        org->printInfo();
        std::cout << std::endl;
    }
}

void Registrar::printByType(const std::string& type) const {
    for (const Organization* org : registry) {
        if (org->getType() == type) {
            org->printInfo();
            std::cout << std::endl;
        }
    }
}

void Registrar::printByName(const std::string& name) const {
    for (const Organization* org : registry) {
        if (org->getName() == name) {
            org->printInfo();
            std::cout << std::endl;
        }
    }
}

void Registrar::printByCountry(const std::string& country) const {
    for (const Organization* org : registry) {
        if (org->getCountry() == country) {
            org->printInfo();
            std::cout << std::endl;
        }
    }
}

void Registrar::printBySector(const std::string& sector) const {
    for (const Organization* org : registry) {
        if (org->getSector() == sector) {
            org->printInfo();
            std::cout << std::endl;
        }
    }
}

void Registrar::removeByName(const std::string& name) {
    auto it = std::remove_if(registry.begin(), registry.end(),
        [&name](Organization* org) {
            if (org->getName() == name) {
                delete org;
                return true;
            }
            return false;
        });
    registry.erase(it, registry.end());
}

std::vector<std::string> Registrar::getNames() const {
    std::vector<std::string> names;
    for (auto org : registry) {
        names.push_back(org->getName());
    }
    return names;
}

void Registrar::clear() {
    for (Organization* org : registry) {
        delete org;
    }
    registry.clear();
}
