#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H

#include "Report.h"

class ReportGenerator {
public:
    void generateReport(const Report& reportType, const std::vector<std::string>& data) const;
};

#endif
