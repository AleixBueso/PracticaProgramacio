#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Project1\Point2D.h"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestOperatorSuma)
		{
			Point2D point_1;
			Point2D point_2;
			Point2D point_3;

			point_1.x = 1;
			point_1.y = 1;

			point_2.x = 2;
			point_2.y = 2;

			point_3 = point_1 + point_2;

			Assert::IsTrue(point_3.x == 3 && point_3.y == 3);
		}

		TEST_METHOD(TestOperatorResta)
		{
			Point2D point_4;
			Point2D point_5;
			Point2D point_6;

			point_4.x = 2;
			point_4.y = 2;

			point_5.x = 1;
			point_5.y = 1;

			point_6 = point_4 - point_5;

			Assert::IsTrue(point_6.x == 1 && point_6.y == 1);
		}

		TEST_METHOD(TestOperatorMesIgual)
		{
			Point2D point_7;
			Point2D point_8;

			point_7.x = 7;
			point_7.y = 7;

			point_8.x = 8;
			point_8.y = 8;

			point_7 += point_8;

			Assert::IsTrue(point_7.x == 15 && point_7.y == 15);

		}

		TEST_METHOD(TestOperatorMenysIgual)
		{
			Point2D point_9;
			Point2D point_10;

			point_9.x = 9;
			point_9.y = 9;

			point_10.x = 10;
			point_10.y = 10;

			point_9 -= point_10;

			Assert::IsTrue(point_9.x == -1 && point_9.y == -1);


		}

		TEST_METHOD(TestOperatorIgualIgual)
		{
			Point2D point_11;
			Point2D point_12;

			point_11.x = 1;
			point_11.y = 1;

			point_12.x = 1;
			point_12.y = 1;

			Assert::IsTrue(point_11.operator== (point_12));

		}

		TEST_METHOD(TestOperatorDifferent)
		{
			Point2D point_13;
			Point2D point_14;

			point_13.x = 13;
			point_13.y = 13;

			point_14.x = 14;
			point_14.y = 14;

			Assert::IsTrue(point_13.operator!= (point_14));
		}

		TEST_METHOD(TestOperatorIsZero)
		{
			Point2D point_15;

			point_15.x = 15;
			point_15.y = 15;

			Assert::IsFalse(point_15.IsZero());

		}

		TEST_METHOD(TestOperatorSetZero)
		{
			Point2D point_16;

			point_16.x = 16;
			point_16.y = 16;

			point_16.SetZero();

			Assert::IsTrue(point_16.x == 0 && point_16.y == 0);
		}

		TEST_METHOD(TestOperatorDistanceTo)
		{
			Point2D point_17, point_18;

			point_17.x = 0;
			point_17.y = 0;

			point_18.x = 3;
			point_18.y = 4;

			float Distance;

			Distance = point_17.DistanceTo(point_18);

			Assert::IsTrue(Distance == 5);
		}

	};
}
