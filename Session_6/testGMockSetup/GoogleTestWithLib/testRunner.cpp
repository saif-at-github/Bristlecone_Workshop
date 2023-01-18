#include <iostream>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "LibraryCode.hpp"

class SomeClass
{
	public:
		SomeClass() = default;
		virtual void someMethod()
		{
			std::cout << "Say Something\n" ;
		}
};

class MockedClass:public SomeClass
{
	public:
		MockedClass() = default;
		MOCK_METHOD0(someMethod, void());
};

TEST(TestSample, TestMock)
{
	MockedClass mc;
	EXPECT_CALL(mc, someMethod()).Times(1);
	mc.someMethod();
}

TEST(TestSample, TestAddition)
{
    ASSERT_EQ(2, add(1,1));
}

int main(int argc, char **argv)
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
