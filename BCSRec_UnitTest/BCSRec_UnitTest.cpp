#include "pch.h"
#include "CppUnitTest.h"

extern "C" int getPerimeter(int* length, int* width);

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

	};
}
