#include <iostream>
#include "gtest/gtest.h"

#include "src/gtest.cc"
#include "src/gtest-death-test.cc"
#include "src/gtest-filepath.cc"
#include "src/gtest-port.cc"
#include "src/gtest-printers.cc"
#include "src/gtest-test-part.cc"
#include "src/gtest-typed-test.cc"

using namespace std;

int sub(int num1, int num2)
{
	return num1 - num2;
}


int addition(int num1, int num2)
{
	return num1 + num2;
}

/*
TEST(AdditionTest, Test1)
{
	EXPECT_EQ(addition(1, 4), 5);
}
*/

TEST(SubTest, Test1)
{
	EXPECT_EQ(sub(9, 4), 5);
}
int main(int argc, char** argv)
{

	testing::InitGoogleTest(&argc, argv);
	return RUN_ALL_TESTS();

}