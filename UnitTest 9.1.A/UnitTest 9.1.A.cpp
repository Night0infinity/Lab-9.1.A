#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 9.1/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest91A
{
	TEST_CLASS(UnitTest91A)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student[2];
			p[0].fizika = 3;
			p[0].matematika = 4;
			p[0].informatika = 4;

			p[1].fizika = 5;
			p[1].matematika = 9;
			p[1].informatika = 1;

			int amount = Amount(p, 2);
			Assert::AreEqual(amount, 1);
		}
	};
}
