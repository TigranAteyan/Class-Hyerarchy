#include <gtest/gtest.h>
#include "../include/Registrar.h"
#include "../include/LLC.h"
#include "../include/Jsc.h"
#include "../include/NGO.h"
#include "../include/Fund.h"
#include "../include/SummaryReport.h"
#include "../include/ChartReport.h"
#include "../include/ReportGenerator.h"
#include "../include/EducationalInstitution.h"

TEST(RegistrarTest, RegisterAndPrintAll) {
    Registrar registrar;

    registrar.registerOrganization(new LLC("LLC One", "USA", "Reg1", "Retail"));
    registrar.registerOrganization(new NGO("Helping Hands", "Germany", "Reg2"));
    registrar.registerOrganization(new Fund("Charity Fund", "France", "Reg3"));
    registrar.registerOrganization(new EducationalInstitution("Tech Uni", "UK", "Reg4"));

    testing::internal::CaptureStdout();
    registrar.printAll();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("LLC One"), std::string::npos);
    EXPECT_NE(output.find("Helping Hands"), std::string::npos);
    EXPECT_NE(output.find("Charity Fund"), std::string::npos);
    EXPECT_NE(output.find("Tech Uni"), std::string::npos);
}

TEST(RegistrarTest, RemoveByName) {
    Registrar registrar;
    registrar.registerOrganization(new NGO("NGO1", "Germany", "Reg5"));
    registrar.registerOrganization(new LLC("LLC1", "USA", "Reg6", "IT"));

    registrar.removeByName("NGO1");

    testing::internal::CaptureStdout();
    registrar.printAll();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_EQ(output.find("NGO1"), std::string::npos);
    EXPECT_NE(output.find("LLC1"), std::string::npos);
}

TEST(RegistrarTest, PrintByCountry) {
    Registrar registrar;
    registrar.registerOrganization(new Fund("FundA", "France", "Reg7"));
    registrar.registerOrganization(new LLC("LLC2", "France", "Reg8", "Finance"));

    testing::internal::CaptureStdout();
    registrar.printByCountry("France");
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_NE(output.find("FundA"), std::string::npos);
    EXPECT_NE(output.find("LLC2"), std::string::npos);
}

TEST(RegistrarTest, ClearAll) {
    Registrar registrar;
    registrar.registerOrganization(new NGO("NGO2", "Spain", "Reg9"));

    registrar.clear();

    testing::internal::CaptureStdout();
    registrar.printAll();
    std::string output = testing::internal::GetCapturedStdout();

    EXPECT_TRUE(output.empty());
}

TEST(SummaryReportTest, GeneratesCorrectOutput) {
    SummaryReport summary;
    std::vector<std::string> data = {"Item A", "Item B", "Item C"};

    std::string expected = "Summary Report:\n";
    expected += "- Item A\n";
    expected += "- Item B\n";
    expected += "- Item C\n";

    EXPECT_EQ(summary.generate(data), expected);
}

TEST(ChartReportTest, GeneratesCorrectChart) {
    ChartReport chart;
    std::vector<std::string> data = {"Apple", "Kiwi"};

    std::string expected = "Chart Report:\n";
    expected += "Apple | █████\n";
    expected += "Kiwi | ████\n";

    EXPECT_EQ(chart.generate(data), expected);
}
