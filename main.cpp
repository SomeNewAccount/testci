#include <iostream>
#include <cstdlib>
#include <gtest/gtest.h>

using namespace std;

int sum(int a, int b) {
	return a + b;
}

TEST(sumTest, sumNull) {
	EXPECT_EQ(15, sum(10, 5));
}

int main(int argc, char** argv) {
	testing::InitGoogleTest(&argc, argv);

	return RUN_ALL_TESTS();
}