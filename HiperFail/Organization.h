#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include <string>
class Organization {
protected:
    std::string name;
    std::string country;
    std::string registrationNumber;
public:
    Organization(const std::string& name, const std::string& country, const std::string& reg);
    virtual void printInfo() const = 0;
    virtual std::string getType() const = 0;
    virtual std::string getCountry() const;
    virtual ~Organization();
};
#endif