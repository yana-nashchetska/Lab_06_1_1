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
			int S = 0;
			int r[10] = { -1, 3, 7, 2, -4, 5, 4, 5, 5, 3 };
			int t = Sum(r, 10);
				Assert::AreEqual(t, 30);
		}
	};
}
