#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);
extern "C" int getArea(int* length, int* width); 
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace BCSRecUnitTest
{
	TEST_CLASS(BCSRecUnitTest)
	{
	public:
		
		TEST_METHOD(TestPerimeter1)
		{
			int Result;
			int x = 2365214;
			int y = 3200;
			Result = getPerimeter(&x, &y);
			Assert::AreEqual(4736828, Result);
		}
		// Variables can be replaced for other tests
		TEST_METHOD(TestArea1)
		{
			int Result;
			int x = 25300;
			int y = 32562;
			Result = getArea(&x, &y);
			Assert::AreEqual(823818600, Result);
		}
		// Variables can be replaced for other tests

		TEST_METHOD(Test_SetLength1)
		{
			int length = 5;
			int input = 6;
			int expected = 6;
			setLength(input, &length);
			int actual = length;
			Assert::AreEqual(expected, actual);
		} // testing function works
		TEST_METHOD(Test_SetLength2)
		{
			int length = 5;
			int input = -7;
			int expected = 5;
			setLength(input, &length);
			int actual = length;
			Assert::AreEqual(expected, actual);
		} //testing negative numbers
		TEST_METHOD(Test_SetLength3)
		{
			int length = 5;
			int input = 100;
			int expected = 5;
			setLength(input, &length);
			int actual = length;
			Assert::AreEqual(expected, actual);
		} // testing upper limit
		TEST_METHOD(Test_Setwidth1)
		{
			int width = 5;
			int input = 9.5;
			int expected = 9;
			setLength(input, &width);
			int actual = width;
			Assert::AreEqual(expected, actual);
		} //testing decimal numbers
		TEST_METHOD(Test_Setwidth2)
		{
			int width = 5;
			int input = 0;
			int expected = 5;
			setLength(input, &width);
			int actual = width;
			Assert::AreEqual(expected, actual);
		} //testing 0 input (lower limit)
		TEST_METHOD(Test_Setwidth3)
		{
			int width = 5;
			int input = 45;
			int expected = 45;
			setLength(input, &width);
			int actual = width;
			Assert::AreEqual(expected, actual);
		}// testing if function works




	};
}
