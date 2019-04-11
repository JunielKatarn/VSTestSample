#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Namespace1
{
	TEST_CLASS(TestClass1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(true);
		}

		BEGIN_TEST_METHOD_ATTRIBUTE(TestMethod2)
			TEST_OWNER(L"FailsIntermittently")             // Recognized
		END_TEST_METHOD_ATTRIBUTE()
		TEST_METHOD(TestMethod2)
		{
			Assert::IsTrue(false);
		}
	};
}
