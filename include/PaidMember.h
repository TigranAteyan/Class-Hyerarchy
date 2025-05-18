#ifndef PAIDMEMBER_H
#define PAIDMEMBER_H

#include "Member.h"

class PaidMember : public Member {
public:
    PaidMember(const std::string& name, const std::string& surname, int age, const std::string& passportNumber, const std::string& role);

    std::string toString() const override;
};

#endif
