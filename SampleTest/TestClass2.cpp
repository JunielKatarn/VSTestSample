#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Namespace1
{
	TEST_CLASS(TestClass2)
	{
	public:

		///
		// Run with /TestCaseFilter:"Owner=OwnerName"  => test is found.
		// Run with /TestCaseFilter:"TestCategory=Cat" => test is not found.
		///
		BEGIN_TEST_METHOD_ATTRIBUTE(TestMethod1)
			TEST_OWNER(L"FailsIntermittently")             // Recognized
			TEST_PRIORITY(1)                               // Recognized
			TEST_METHOD_ATTRIBUTE(L"TestCategory", L"Cat") // Ignored
			TEST_DESCRIPTION(L"MayFail")                   // Ignored
		END_TEST_METHOD_ATTRIBUTE()
		TEST_METHOD(TestMethod1)
		{
			Assert::IsTrue(false);
		}

		TEST_METHOD(TestMethod2)
		{
			Assert::IsTrue(true);
		}
	};
}
