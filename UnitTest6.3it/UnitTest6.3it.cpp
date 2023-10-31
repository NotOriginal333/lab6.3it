#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.3it/lab6.3it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63it
{
	TEST_CLASS(UnitTest63it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 6;
			int d[n] = { 1, 2, 3, 4, 5, 6 };
			swapElements(d, n);
			Assert::AreEqual(1, d[0]);
			Assert::AreEqual(3, d[1]);
			Assert::AreEqual(2, d[2]);
			Assert::AreEqual(5, d[3]);
			Assert::AreEqual(4, d[4]);
			Assert::AreEqual(6, d[5]);
		}
	};
}
