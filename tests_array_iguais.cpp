#include "CppUTest/TestHarness.h"

extern "C"
{
	int array_iguais(double a[], double b[], int numElementos);
}

TEST_GROUP(tests_array_iguais)
{
};

TEST(tests_array_iguais, Teste123Igual123)
{
	double a[] = { 1.0, 2.0, 3.0 };
	double b[] = { 1.0, 2.0, 3.0 };

	LONGS_EQUAL(1, array_iguais(a, b, 3));
}

TEST(tests_array_iguais, Teste123Diferente321)
{
	double a[] = { 1.0, 2.0, 3.0 };
	double b[] = { 3.0, 2.0, 1.0 };

	LONGS_EQUAL(0, array_iguais(a, b, 3));
}

TEST(tests_array_iguais, Teste5432Igual5431)
{
	double a[] = { 5.0, 4.0, 3.0, 2.0 };
	double b[] = { 5.0, 4.0, 3.0, 1.0 };

	LONGS_EQUAL(0, array_iguais(a, b, 4));
}
