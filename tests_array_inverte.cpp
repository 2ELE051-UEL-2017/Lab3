#include "CppUTest/TestHarness.h"

extern "C"
{
	void array_inverte(double res[], double v[], int numElementos);
}

TEST_GROUP(tests_array_inverte)
{
};

void VECTOR_DOUBLES_EQUAL(double expected[], double actual[], double tolerance, int numElementos)
{
	int i;

	for (i = 0; i < numElementos; i++)
		DOUBLES_EQUAL(expected[i], actual[i], tolerance);
}

TEST(tests_array_inverte, Teste12)
{
	double v[] = { 1.0, 2.0 };
	double vInvertido[] = { 2.0, 1.0 };
	double res[2];

	array_inverte(res, v, 2);

	VECTOR_DOUBLES_EQUAL(vInvertido, res, 1e-6, 2);
}

TEST(tests_array_inverte, Teste123)
{
	double v[] = { 1.0, 2.0, 3.0 };
	double vInvertido[] = { 3.0, 2.0, 1.0 };
	double res[3];

	array_inverte(res, v, 3);

	VECTOR_DOUBLES_EQUAL(vInvertido, res, 1e-6, 3);
}

TEST(tests_array_inverte, Teste1234)
{
	double v[] = { 1.0, 2.0, 3.0, 4.0 };
	double vInvertido[] = { 4.0, 3.0, 2.0, 1.0 };
	double res[4];

	array_inverte(res, v, 4);

	VECTOR_DOUBLES_EQUAL(vInvertido, res, 1e-6, 4);
}
