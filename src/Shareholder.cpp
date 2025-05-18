#include "Shareholder.h"
#include <iostream>

Shareholder::Shareholder(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role)
    : Member(name, surname, age, passportNumber, role) {}

std::string Shareholder::toString() const {
    return "Shareholder: " + name + " " + surname + ", Age: " + std::to_string(age) + ", Role: " + role + ", Passport: " + passportNumber;
}
