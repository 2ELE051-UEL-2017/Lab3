#include "CppUTest/TestHarness.h"

extern "C"
{
	double vetor_norma(double v[], int numElementos);
}

TEST_GROUP(tests_vetor_norma)
{
};

TEST(tests_vetor_norma, Teste0)
{
	double v[] = { 0.0 };

	DOUBLES_EQUAL(0.0, vetor_norma(v, 1), 1e-6);
}

TEST(tests_vetor_norma, Teste1)
{
	double v[] = { 1.0 };

	DOUBLES_EQUAL(1.0, vetor_norma(v, 1), 1e-6);
}

TEST(tests_vetor_norma, Testem3m4)
{
	double v[] = { -3.0, -4.0 };

	DOUBLES_EQUAL(5.0, vetor_norma(v, 2), 1e-6);
}

TEST(tests_vetor_norma, Teste0m123m456m7)
{
	double v[] = { 0.0, -1.0, 2.0, 3.0, -4.0, 5.0, 6.0, -7.0 };

	DOUBLES_EQUAL(sqrt(140.0), vetor_norma(v, 8), 1e-6);
}