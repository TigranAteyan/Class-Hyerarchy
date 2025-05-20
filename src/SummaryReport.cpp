#include "SummaryReport.h"

std::string SummaryReport::generate(const std::vector<std::string>& data) const {
    std::string result = "Summary Report:\n";
    for (size_t i = 0; i < data.size(); ++i) {
        result += "- " + data[i] + "\n";
    }
    return result;
}
