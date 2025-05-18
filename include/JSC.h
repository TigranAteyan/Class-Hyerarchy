#ifndef JSC_H
#define JSC_H

#include "CommercialOrganization.h"

class JSC : public CommercialOrganization {
public:
    JSC(const std::string& name, const std::string& country, const std::string& reg, const std::string& sector);
    
    void printInfo() const override;
    std::string getType() const override;
    std::string getSector() const override;
};

#endif
