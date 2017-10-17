#include "CppUTest/TestHarness.h"

extern "C"
{
	double array_max(double v[], int numElementos);
}

TEST_GROUP(tests_array_max)
{
};

TEST(tests_array_max, Teste123)
{
	double v[] = { 1.0, 2.0, 3.0 };

	DOUBLES_EQUAL(3.0, array_max(v, 3), 1e-6);
}

TEST(tests_array_max, Teste325)
{
	double v[] = { 3.0, 2.0, 5.0 };

	DOUBLES_EQUAL(5.0, array_max(v, 3), 1e-6);
}

TEST(tests_array_max, Teste253)
{
	double v[] = { 2.0, 5.0, 3.0 };

	DOUBLES_EQUAL(5.0, array_max(v, 3), 1e-6);
}

TEST(tests_array_max, Teste13257)
{
	double v[] = { 13.0, 2.0, 5.0, 7.0 };

	DOUBLES_EQUAL(13.0, array_max(v, 3), 1e-6);
}

TEST(tests_array_max, Teste25713)
{
	double v[] = { 2.0, 5.0, 7.0, 13.0 };

	DOUBLES_EQUAL(13.0, array_max(v, 4), 1e-6);
}

TEST(tests_array_max, Testem1m2m3)
{
	double v[] = { -1.0, -2.0, -3.0 };

	DOUBLES_EQUAL(-1.0, array_max(v, 3), 1e-6);
}

TEST(tests_array_max, Teste00000)
{
	double v[] = { 0.0, 0.0, 0.0, 0.0, 0.0 };

	DOUBLES_EQUAL(0.0, array_max(v, 5), 1e-6);
}