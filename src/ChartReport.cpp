#include "ChartReport.h"

std::string ChartReport::generate(const std::vector<std::string>& data) const {
    std::string result = "Chart Report:\n";
    for (size_t i = 0; i < data.size(); ++i) {
        result += data[i] + " | ";
        for (size_t j = 0; j < data[i].length(); ++j) {
            result += "\u2588"; 
        }
        result += "\n";
    }
    return result;
}
