/**
 * Unit Tests for Practice class
**/

#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, smoke_test)
{
    ASSERT_TRUE(true);
}

TEST(PracticeTest, empty_palindrome)
{
    Practice mypractice;
		bool actual = mypractice.isPalindrome("");
		ASSERT_EQ(actual,true); //value and expected output
}

TEST(PracticeTest, ascending_order)
{
	Practice mypractice;
	int testFirst = 1;
	int testSecond = 2;
	int testThird = 3;

	mypractice.sortDescending(testFirst, testSecond, testThird);
//	bool result = testFirst > testSecond && testSecond > testThird;
//	ASSERT_EQ(result, true);
	ASSERT_EQ(testFirst, 3); //can use expect instead of assert for it to continue after failure
	ASSERT_EQ(testSecond, 2);
	ASSERT_EQ(testThird, 1);
}

TEST(PracticeTEST, unique_letter)
{
	Practice mypractice;
	string val = "sassy";
	int actual = mypractice.count_starting_repeats(val);
	ASSERT_EQ(actual, 1);
}
