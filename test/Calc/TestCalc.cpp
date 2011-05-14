/**
 * @file TestCalc.cpp
 */
#include <gtest/gtest.h> 
#include <gmock/gmock.h> 
#include <gtest/internal/gtest-port.h> 
#include "Calc.h" 
#include <iostream>
using ::testing::internal::CaptureStdout;
using ::testing::internal::GetCapturedStdout;
using ::testing::Invoke;
using ::testing::_;

class MockCalc : public Calc
{
public:
  MOCK_METHOD0(throw_exception, void());
};

/**
 * @see Calc
 * @brief Calcクラステスト
 */
class TestCalc : public ::testing::Test
{
public:
  MockCalc* calc;

  virtual void SetUp()
  {
    calc  = new MockCalc();
  }

  virtual void TearDown()
  {
    delete calc;
  }
};

/**
 * @see add
 * @brief 加算テスト
 *
 * ちゃんとなってるかどうか
 * @li あああ
 * @li いいい
 *
 */
TEST_F(TestCalc, 1_1_1)
{
  EXPECT_EQ(3, calc->add(1, 2));
}

TEST_F(TestCalc, 1_2_1)
{
  std::cout << typeid(calc).name() << std::endl;

  CaptureStdout();
  std::cout << "hoge" << std::endl;
  EXPECT_STREQ("hoge\n", GetCapturedStdout().c_str());
}

