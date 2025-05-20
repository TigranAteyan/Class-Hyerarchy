#ifndef SUMMARYREPORT_H
#define SUMMARYREPORT_H

#include "Report.h"

class SummaryReport : public Report {
public:
    std::string generate(const std::vector<std::string>& data) const override;
};

#endif