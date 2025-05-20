#include "ReportGenerator.h"
#include <iostream>

void ReportGenerator::generateReport(const Report& reportType, const std::vector<std::string>& data) const {
    std::cout << reportType.generate(data);
}
