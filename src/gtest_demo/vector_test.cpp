#include "stdafx.h"
#include "gtest/gtest.h"

class TestVector
    : public testing::Test
{
public:
    //�����־
    static void SetUpTestCase() {
        std::cout << __FUNCTION__ << "������case��ʼ֮ǰ����һ��" << std::endl;
    }

    static void TearDownTestCase() {
        std::cout << __FUNCTION__ << "������case���֮�����һ��" << std::endl;
    }

    virtual void SetUp()   //TEST��֮ǰ��ִ��SetUp
    {
        std::cout << __FUNCTION__ << "��ÿ��case��ʼ֮ǰ����һ��" << std::endl;
    }
    virtual void TearDown() //TEST����֮���ִ��TearDown
    {
        std::cout << __FUNCTION__ << "��ÿ��case���֮�����һ��" << std::endl;
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
