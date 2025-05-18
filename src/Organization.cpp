#include "Organization.h"
#include <iostream>

Organization::Organization(const std::string& name, const std::string& country, const std::string& reg)
    : name(name), country(country), registrationNumber(reg) {}

std::string Organization::getCountry() const { return country; }
std::string Organization::getName() const { return name; }
Organization::~Organization() {}

void Organization::addMember(const Member& newMember) {
    members.push_back(newMember);
}

void Organization::removeMember(const Member& other) {
    for (size_t i = 0; i < members.size(); ++i) {
        if (members[i].equals(other)) {
            members.erase(members.begin() + i);
            break;
        }
    }
}

const Member* Organization::findMemberByNameAndSurname(const std::string& name, const std::string& surname) const {
    for (const auto& m : members) {
        if (m.getName() == name && m.getSurname() == surname)
            return &m;
    }
    return nullptr;
}

const Member* Organization::findMemberByPassport(const std::string& passportNumber) const {
    for (const auto& m : members) {
        if (m.getPassportNumber() == passportNumber)
            return &m;
    }
    return nullptr;
}

void Organization::printMembers() const {
    for (const auto& m : members) {
        m.toString();
    }
}
