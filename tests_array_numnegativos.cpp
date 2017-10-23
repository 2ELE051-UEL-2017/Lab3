#include "CppUTest/TestHarness.h"

extern "C"
{
	int array_numNegativos(double v[], int numElementos);
}

TEST_GROUP(tests_array_numNegativos)
{
};

TEST(tests_array_numNegativos, Teste0)
{
	double v[] = { 0.0 };

	LONGS_EQUAL(0, array_numNegativos(v, 1));
}

TEST(tests_array_numNegativos, Testem1)
{
	double v[] = { -1.0 };

	LONGS_EQUAL(1, array_numNegativos(v, 1));
}

TEST(tests_array_numNegativos, Testem1m2)
{
	double v[] = { -1.0, -2.0 };

	LONGS_EQUAL(2, array_numNegativos(v, 2));
}

TEST(tests_array_numNegativos, Teste01m2m34m5)
{
	double v[] = { 0.0, 1.0, -2.0, -3.0, 4.0, -5.0 };

	LONGS_EQUAL(3, array_numNegativos(v, 6));
}
