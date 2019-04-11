#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Namespace2
{
	TEST_CLASS(TestClass4)
	{
	public:

		TEST_METHOD(TestMethod3)
		{
			Assert::IsTrue(true);
		}

		TEST_METHOD(TestMethod4)
		{
			Assert::IsTrue(true);
		}
	};
}
