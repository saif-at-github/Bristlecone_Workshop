#include <iostream>
#include <gtest/gtest.h>
#include "LibraryCode.hpp"

TEST(ToUpperTest, BasicTest)
{
 //Arrange
 char inputString[] = "Hello World";
 int ret = 0;
 //Act
 toUpper(inputString);

 std::cout << "After toUpper: " << inputString << '\n';
 if(inputString == "HELLO WORLD") // pointer
 {
     std::cout << "Equal strings\n";
 }
 else
 {
     std::cout << "Unequal strings\n";
 }

 if(ret == strcmp(inputString,"HELLO WORLD")) // content
 {
     std::cout << "Equal strings\n";
     ASSERT_EQ(0, ret);
 }
 else
 {
     std::cout << "Unequal strings\n";
 }
 
 //ASSERT
 //ASSERT_EQ("HELLO WORLD", inputString);

 /* mind here that assert macro uses ==
  * right method is to strcmp */
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
