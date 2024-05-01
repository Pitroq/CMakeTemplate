#include <gtest/gtest.h>
#include "calculations.h"

TEST(calculations, add) {
    EXPECT_EQ(add(1, 2), 3);
}

TEST(calculations, substract) {
    EXPECT_EQ(substract(2, 2), 0);
}

TEST(calculations, multiply) {
    EXPECT_EQ(multiply(1, 2), 2);
}

TEST(calculations, divide) {
    EXPECT_EQ(divide(2, 2), 1);
}
