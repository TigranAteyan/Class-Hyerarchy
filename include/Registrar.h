#ifndef REGISTRAR_H
#define REGISTRAR_H
#include <vector>
#include "Organization.h"
class Registrar {
private:
    std::vector<Organization*> registry;
public:
    void registerOrganization(Organization* org);
    void printAll() const;
    void printByType(const std::string& type) const;
    void printByName(const std::string& name) const;
    void printByCountry(const std::string& country) const;
    void printBySector(const std::string& sector) const;
    void removeByName(const std::string& name);
    void clear();
    ~Registrar();
};
#endif