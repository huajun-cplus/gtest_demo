#include "stdafx.h"
#include "gtest/gtest.h"

class TestVector
    : public testing::Test
{
public:
    //添加日志
    static void SetUpTestCase() {
        std::cout << __FUNCTION__ << "在所有case开始之前调用一次" << std::endl;
    }

    static void TearDownTestCase() {
        std::cout << __FUNCTION__ << "在所有case完成之后调用一次" << std::endl;
    }

    virtual void SetUp()   //TEST跑之前会执行SetUp
    {
        std::cout << __FUNCTION__ << "在每个case开始之前调用一次" << std::endl;
    }
    virtual void TearDown() //TEST跑完之后会执行TearDown
    {
        std::cout << __FUNCTION__ << "在每个case完成之后调用一次" << std::endl;
    }

    std::vector<int> m_vec;
};

TEST_F(TestVector, empty)
{
    EXPECT_TRUE(m_vec.empty());
}

TEST_F(TestVector, size)
{
    EXPECT_EQ(m_vec.size(), 0);
}
