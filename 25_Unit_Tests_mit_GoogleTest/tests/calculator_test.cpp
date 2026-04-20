#include <gtest/gtest.h>

#include <stdexcept>

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

TEST(CalculatorTest, DividesNumbers) {
    EXPECT_EQ(divide(20, 5), 4);
}

TEST(CalculatorTest, ThrowsOnDivisionByZero) {
    EXPECT_THROW(divide(10, 0), std::invalid_argument);
}

TEST(CalculatorTest, RecognizesEvenNumbers) {
    EXPECT_TRUE(is_even(8));
    EXPECT_FALSE(is_even(7));
}

class CalculatorFixture : public ::testing::Test {
protected:
    std::vector<int> values = {2, 4, 6, 8};
};

TEST_F(CalculatorFixture, CalculatesAverage) {
    EXPECT_DOUBLE_EQ(average(values), 5.0);
}

TEST_F(CalculatorFixture, ThrowsForEmptyAverageInput) {
    values.clear();
    EXPECT_THROW(average(values), std::invalid_argument);
}

TEST(CalculatorTest, MultipleChecksInOneTest) {
    EXPECT_EQ(add(1, 1), 2);
    EXPECT_EQ(subtract(9, 3), 6);
    EXPECT_EQ(multiply(3, 5), 15);
    EXPECT_TRUE(is_even(12));
}
