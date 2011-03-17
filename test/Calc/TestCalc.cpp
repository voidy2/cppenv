#include <gtest/gtest.h>
#include "Calc.h"

class TestCalc : public ::testing::Test
{
public:
  Calc* calc;

  virtual void SetUp()
  {
    calc  = new Calc();
  }

  virtual void tearDown()
  {
    delete calc;
  }
};

TEST_F(TestCalc, addTest)
{
  EXPECT_EQ(3, calc->add(1, 2));
}

