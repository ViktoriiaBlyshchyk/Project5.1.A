#include "pch.h"
#include "CppUnitTest.h"
#include "D:\Study\ООП\Project5.1(A)\Project5.1(A)\IntPower.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			IntPower p(2, 2);
			Power1(p);
			double a = 4;
			Assert::AreEqual(Power1(p), a);
		}
	};
}
