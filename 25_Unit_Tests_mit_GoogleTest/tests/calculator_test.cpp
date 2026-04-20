#include <gtest/gtest.h>

#include "calculator.h"

TEST(CalculatorTest, AddsPositiveNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalculatorTest, AddsNegativeNumbers) {
    EXPECT_EQ(add(-2, -3), -5);
}

TEST(CalculatorTest, SubtractsNumbers) {
    EXPECT_EQ(subtract(10, 4), 6);
}

TEST(CalculatorTest, MultipliesNumbers) {
    EXPECT_EQ(multiply(6, 7), 42);
}

TEST(CalculatorTest, RecognizesEvenNumbers) {
    EXPECT_TRUE(is_even(8));
    EXPECT_FALSE(is_even(7));
}

TEST(CalculatorTest, MultipleChecksInOneTest) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(subtract(9, 3), 6);
    EXPECT_TRUE(is_even(12));
}
