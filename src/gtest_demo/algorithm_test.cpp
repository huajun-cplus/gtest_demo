#include "stdafx.h"

#include "gtest/gtest.h"

TEST (algorithm, max) {
    EXPECT_EQ(std::max(1, 2), 2);
    EXPECT_NE(std::max(1, 2), 1);
}
