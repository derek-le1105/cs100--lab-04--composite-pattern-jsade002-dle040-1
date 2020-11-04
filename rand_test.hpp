#ifndef RAND_TEST
#define RAND_TEST

#include "rand.hpp"

TEST(RandTest, RandLessThan100){
	Base* test = new Rand();
	EXPECT_LT(test->evaluate(), 100);
}

TEST(RandTest, RandGreaterThan0){
	Base* test = new Rand();
	EXPECT_GT(test->evaluate(), 0);
}

#endif
