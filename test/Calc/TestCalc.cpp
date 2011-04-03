/**
 * @file TestCalc.cpp
 */
#include <gtest/gtest.h>
#include "Calc.h"

/**
 * @see Calc
 * @brief Calcクラステスト
 */
class TestCalc : public ::testing::Test
{
public:
  Calc* calc;

  virtual void SetUp()
  {
    calc  = new Calc();
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

