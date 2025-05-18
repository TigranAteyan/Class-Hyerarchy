#ifndef SHAREHOLDER_H
#define SHAREHOLDER_H

#include "Member.h"

class Shareholder : public Member {
public:
    Shareholder(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role);

    std::string toString() const override;
};

#endif

