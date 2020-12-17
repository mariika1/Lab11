#include "Polish.h"
#include <gtest.h>

TEST(Polish, can_create_Polish)
{
  ASSERT_NO_THROW(TPolish P);
}

TEST(Polish, operation_plus)
{
  char* s;
  s = "4+6";
  TPolish P;
  EXPECT_EQ(P.Calculation(s), 10);
}

TEST(Polish, operation_minus)
{
  char* s;
  s = "4-6";
  TPolish P;
  EXPECT_EQ(P.Calculation(s), -2);
}

TEST(Polish, operation_multiply)
{
  char* s;
  s = "4*6";
  TPolish P;
  EXPECT_EQ(P.Calculation(s), 24);
}

TEST(Polish, operation_division)
{
  char* s;
  s = "4/2";
  TPolish P;
  EXPECT_EQ(P.Calculation(s), 2);
}

TEST(Polish, division_by_zero_exception)
{
  char* s;
  s = "4/0";
  TPolish P;
  ASSERT_ANY_THROW(P.Calculation(s));
}

TEST(Polish, operation_order)
{
  char* s;
  s = "2+2*4";
  TPolish P;

  EXPECT_EQ(P.Calculation(s), 10);
}

TEST(Polish, operation_order_conversely)
{
  char* s;
  s = "2*4+2";
  TPolish P;

  EXPECT_EQ(P.Calculation(s), 10);
}
