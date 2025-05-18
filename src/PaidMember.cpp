#include "PaidMember.h"

PaidMember::PaidMember(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role)
    : Member(name, surname, age, passportNumber, role) {}

std::string PaidMember::toString() const {
    return "Paid Member: " + name + " " + surname + ", Age: " + std::to_string(age) + ", Role: " + role + ", Passport: " + passportNumber;
}
