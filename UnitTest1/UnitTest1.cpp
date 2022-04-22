#include "pch.h"
#include "CppUnitTest.h"
#include "../Pair.h"
#include "../Pair.cpp"
#include "../Object.h"
#include "../Object.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Pair a(1, 1);
			int t = Object::Count();
			Assert::AreEqual(t, 0);
		}
	};
}
