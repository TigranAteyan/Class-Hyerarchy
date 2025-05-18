#include "Member.h"

Member::Member(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role)
    : name(name), surname(surname), age(age), passportNumber(passportNumber), role(role) {}

std::string Member::toString() const {
    return name + " " + surname + ", Age: " + std::to_string(age) + ", Role: " + role + ", Passport: " + passportNumber;
}

std::string Member::getName() const { return name; }
std::string Member::getSurname() const { return surname; }
int Member::getAge() const { return age; }
std::string Member::getPassportNumber() const { return passportNumber; }
std::string Member::getRole() const { return role; }

bool Member::equals(const Member& other) const {
    return name == other.name && surname == other.surname && passportNumber == other.passportNumber;
}

Member::~Member() {}
