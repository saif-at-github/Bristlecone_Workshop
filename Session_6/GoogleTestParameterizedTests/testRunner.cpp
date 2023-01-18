#include <iostream>
#include <gtest/gtest.h>
#include "LibraryCode.hpp"
// Validator(5, 10)
// 4, 5, 6, 7, 9, 10, 11 

// Test Fixture
//class ValidatorFixture : public testing::TestWithParam<std::tuple<int, bool>>
class ValidatorFixture : public testing::TestWithParam<int>
{
public:
protected:
 Validator mValidator{5, 10};
};

// Test body

TEST_P(ValidatorFixture, TestInRange)
{
	int param = GetParam();
	bool isInside = mValidator.inRange(param);
	ASSERT_TRUE(isInside);
}
/*TEST_P(ValidatorFixture, TestInRange)
{
  std::tuple<int, bool> tuple = GetParam();

  int param = std::get<0>(tuple);
  bool expectedValue = std::get<1>(tuple);

  std::cout << "param = " << param << " expected value = " << expectedValue << '\n';

  bool isInside = mValidator.inRange(param);

  ASSERT_EQ(expectedValue, isInside);
}
*/
// Test suite
INSTANTIATE_TEST_CASE_P(InRangeTrue, ValidatorFixture, testing::Values(5,6,7,8,9,10));

// 1st arg is naming purpose only
// 2nd arg is ValidatorFixture
// 3rd arg is generator

/*INSTANTIATE_TEST_CASE_P(InRangeTrue, ValidatorFixture, testing::Values(
                                                          std::make_tuple(-50, false),
                                                          std::make_tuple(4, false),
                                                          std::make_tuple(5, true),
                                                          std::make_tuple(6, true),
                                                          std::make_tuple(7, true),
                                                          std::make_tuple(9, true),
                                                          std::make_tuple(10, true),
                                                          std::make_tuple(11, false),
                                                          std::make_tuple(100, false)
));
*/
int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
