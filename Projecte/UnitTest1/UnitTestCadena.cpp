#include "stdafx.h"
#include "CppUnitTest.h"
#include "../Project1/Cadena.h"
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(EmptyConstructor)
		{
			String ad;

			Assert::IsTrue(ad.str[0] == '\0');

		}

		TEST_METHOD(ConstructorChar)
		{
			String ad = "hola";

			Assert::IsTrue(ad.size == 5);

		}

		TEST_METHOD(ConstructorString)
		{
			String s1;
			String s2(s1);
			String s3("hola");
			String s4(s3);

			Assert::IsTrue(s1 == "");
			Assert::IsTrue(s1 == s2);
			Assert::IsTrue(s3 == "hola");
			Assert::IsTrue(s3 == s4);

		}

		TEST_METHOD(OperatorEqualEqual1)
		{
			String a = "hola";
			String b = "hola";
			Assert::IsTrue(a.operator==(b));
		}

		TEST_METHOD(OperatorEqualEqual2)
		{
			String a = "hola";
			char* b = "hola";
			Assert::IsTrue(a.operator==(b));
		}

		TEST_METHOD(OperatorDifferent1)
		{
			String a = "hola";
			String b = "mundo";
			Assert::IsTrue(a.operator!=(b) < 0);

			String c = "mundo";
			String d = "hola";
			Assert::IsTrue(a.operator!=(b) > 0);
		}

		TEST_METHOD(OperatorDifferent2)
		{
			String a = "hola";
			char* b = "mundo";
			Assert::IsTrue(a.operator!=(b) < 0);

			String c = "mundo";
			char* d = "hola";
			Assert::IsTrue(a.operator!=(b) > 0);
		}

		TEST_METHOD(OperatorEqual1)
		{
			String a = "hola";
			String b = "mundo";

			a = b;

			Assert::AreEqual(a, b);
		}

		TEST_METHOD(OperatorEqual2)
		{
			String a = "hola";
			char* b = "mundo";


			Assert::IsTrue(a == b);
		}

		TEST_METHOD(OperatorPlusEqual1)
		{
			String a = "hola";
			String b = "mundo";

			a += b;

			Assert::IsTrue(a == "holamundo");
		}

		TEST_METHOD(OperatorPlusEqual2)
		{
			String a = "hola";
			char* b = "mundo";

			a += b;
			Assert::IsTrue(a == "holamundo");
		}
	};
}