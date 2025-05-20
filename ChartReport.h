#ifndef CHARTREPORT_H
#define CHARTREPORT_H

#include "Report.h"

class ChartReport : public Report {
public:
    std::string generate(const std::vector<std::string>& data) const override;
};

#endif