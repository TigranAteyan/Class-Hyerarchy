#ifndef REPORT_H
#define REPORT_H

#include <string>
#include <vector>

class Report {
public:
    virtual ~Report() {}
    virtual std::string generate(const std::vector<std::string>& data) const = 0;
};

#endif
