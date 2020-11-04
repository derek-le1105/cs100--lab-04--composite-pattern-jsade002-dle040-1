#ifndef DIV_TEST
#define DIV_TEST

#include "gtest/gtest.h"

#include "div.hpp"

Op* nTwo = new Op(-2);
Op* ten = new Op(10);

TEST(DivTest, DivideByPositive){
	Base* test = new Div(ten, ten);
	EXPECT_EQ(test->evaluate(), 1);
}

TEST(DivTest, DivideByNegative){
	Base* test = new Div(ten, nTwo);
	EXPECT_EQ(test->evaluate(), -5);
}

#endif
