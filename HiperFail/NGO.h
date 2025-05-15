#ifndef NGO_H
#define NGO_H
#include "NonProfitOrganization.h"
class NGO : public NonProfitOrganization {
public:
    NGO(const std::string& name, const std::string& country, const std::string& reg);
    void printInfo() const override;
    std::string getType() const override;
};
#endif