#ifndef FUND_H
#define FUND_H
#include "NonProfitOrganization.h"
class Fund : public NonProfitOrganization {
public:
    Fund(const std::string& name, const std::string& country, const std::string& reg);
    void printInfo() const override;
    std::string getType() const override;
};
#endif