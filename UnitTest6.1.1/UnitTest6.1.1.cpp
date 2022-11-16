#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_1/Lab_06_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest611
{
	TEST_CLASS(UnitTest611)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int test;
			const int n = 23;
			int r[n];
			test = Sum(r, n);
				Assert::AreEqual(test, 0);
		}
	};
}
