#include <iostream>
#include <string>
#include <cstdlib>
#include <gtest_main/gtest.h>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

TEST(sumTest, sumNull) {
	EXPECT_EQ(0, sum(10, 5));
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}