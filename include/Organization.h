#ifndef ORGANIZATION_H
#define ORGANIZATION_H
#include <string>
#include <vector>
#include "Member.h"

class Organization {
protected:
    std::string name;
    std::string country;
    std::string registrationNumber;
    std::vector<Member> members;
public:
    Organization(const std::string& name, const std::string& country, const std::string& reg);
    virtual void printInfo() const = 0;
    virtual std::string getType() const = 0;
    virtual std::string getSector() const = 0;
    virtual bool isCommercial() const = 0; 

    std::string getName() const;
    std::string getCountry() const;

    void addMember(const Member& newMember);
    void removeMember(const Member& other);
    const Member* findMemberByNameAndSurname(const std::string& name, const std::string& surname) const;
    const Member* findMemberByPassport(const std::string& passportNumber) const;
    void printMembers() const;

    virtual ~Organization();
};

#endif
