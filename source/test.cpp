#include "pch.h"
#include <gtest/gtest.h>
#include <string.h>
namespace {

	TEST(pharmacy,DefaultConstructor)
	{
		Pharmacy t;
		EXPECT_EQ(0, t.getPatient_age(0));
		EXPECT_EQ(0, t.getPatient_phone_number(0));
		EXPECT_STREQ("", t.getPatient_name("").c_str());
		EXPECT_STREQ("", t.getPatient_blood_group("").c_str());
		EXPECT_STREQ("", t.getPatient_address("").c_str());
	}
	/*TEST(pharmacy, ParamaterizedConstructor)
	{
		Pharmacy t("Vinuta", 21, "O-", "Bangalore", 7019421512);
		EXPECT_EQ(21, t.getPatient_age(21));
		EXPECT_EQ(7019421512, t.getPatient_phone_number(7019421512));
		EXPECT_STREQ("Vinuta", t.getPatient_name("Vinuta").c_str());
		EXPECT_STREQ("O-", t.getPatient_blood_group("O-").c_str());
		EXPECT_STREQ("Bangalore", t.getPatient_address("Bangalore").c_str());
	}*/
}
int main(int argc, char **argv) 
    {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    } 
