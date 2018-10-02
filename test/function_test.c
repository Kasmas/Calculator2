#include <ctest.h>
#include <../src/function.h>

CTEST(Polozh_na_otric, slozhenye)
  {
    int result = slozhenye(6, -2);
    int expected = 4;
    ASSERT_EQUAL(expected, result);
   }
   
CTEST(Otric_na_polozh, slozhenye)
  {
    int result = slozhenye(-1, 1);
    int expected = 0;
    ASSERT_EQUAL(expected, result);
   }
   
CTEST(Polozh_na_otric, vichitanye)
  {
    int result = vichitanye(10, -4);
    int expected = 14;
    ASSERT_EQUAL(expected, result);
   }
   
CTEST(Otric_na_polozh, vichitanye)
  {
    int result = vichitanye(-2, 3);
    int expected = 1;
    ASSERT_EQUAL(expected, result);
   }
   
CTEST(Polozh_na_otric, umnozhenye)
  {
    int result = umnozhenye(5, -5);
    int expected = -25;
    ASSERT_EQUAL(expected, result);
   }
   
CTEST(Otric_na_polozh, umnozhenye)
  {
    int result = umnozhenye(-2, 6);
    int expected = -12;
    ASSERT_EQUAL(expected, result);
   }

CTEST(Polozh_na_otric, delenye)
  {
    int result = delenye(54, -6);
    int expected = -9;
    ASSERT_EQUAL(expected, result);
   }

CTEST(Otric_na_polozh, delenye)
  {
    int result = delenye(-2, 1);
    int expected = -2;
    ASSERT_EQUAL(expected, result);
   }
