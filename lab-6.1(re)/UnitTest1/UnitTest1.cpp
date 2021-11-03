#include "pch.h"
#include "CppUnitTest.h"
#include "..\lab-6.1(re)\Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int A[2] = { 3,5 };
			int C = Count(A, 2, 0);
			Assert::AreEqual(2, C);
		}
	};
}


