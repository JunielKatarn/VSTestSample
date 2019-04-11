#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Namespace1
{
	TEST_CLASS(TestClass2)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(true);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::IsTrue(true);
		}
	};
}
