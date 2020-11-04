#ifndef POW_TEST
#define POW_TEST

#include "gtest/gtest.h"

#include "pow.hpp"

Op* zero = new Op(0);
Op* nFive = new Op(-5);
Op* three = new Op(3);
Op* two = new Op(2);

TEST(PowTest, PowEvaluateZero){
	Base* test = new Pow(zero, zero);
	EXPECT_EQ(test->evaluate(), 1);
}

TEST(PowTest, PowEvaluateNegativeToThird){
	Base* test = new Pow(nFive, three);
	EXPECT_EQ(test->evaluate(), -125);
}

TEST(PowTest, PowEvaluateNegativeToTwo){
	Base* test = new Pow(nFive, two);
	EXPECT_EQ(test->evaluate(), 25);
}

#endif
