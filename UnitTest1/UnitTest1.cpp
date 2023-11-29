#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			#define MIN(a,b) ((a)<(b)?(a):(b))
			#define MAX(a,b) ((a)>(b)?(a):(b))
			#define ABS(a) ((a)>= 0? (a) : -(a))
			#define PRINT(a) printf(#a " = %d\n", a)
			#define IF(condition) ((condition) ? 1 : 0)
			#define POW(a,n) pow((a), (n))
			#define SQRT(a) sqrt(a)

			int x = 1;
			int y = 2;
			int z = 2;

			int w = MIN(ABS(x) + ABS(y) + ABS(z), (int)POW(x, 3));

			int expected = 1;

			int actual = w;

			Assert::AreEqual(expected, actual);
		}
	};
}
