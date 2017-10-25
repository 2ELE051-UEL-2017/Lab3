#include "CppUTest/TestHarness.h"
#include "aux_test_functions.h"

extern "C"
{
	void matriz3x3_inversa(double B[][3], double A[][3]);
}

TEST_GROUP(tests_matriz3x3_inversa)
{
};

TEST(tests_matriz3x3_inversa, TesteIdentidade)
{
	double identidade[3][3] = {
		{ 1.0, 0.0, 0.0 },
		{ 0.0, 1.0, 0.0 },
		{ 0.0, 0.0, 1.0 }
	};

	double B[3][3];

	matriz3x3_inversa(B, identidade);

	MATRIX_3X3_DOUBLES_EQUAL(identidade, B, 1e-6);
}

TEST(tests_matriz3x3_inversa, Teste105216340)
{
	double A[3][3] = {
		{ 1.0, 0.0, 5.0 },
		{ 2.0, 1.0, 6.0 },
		{ 3.0, 4.0, 0.0 }
	};

	double esperado[3][3] = {
		{ -24.0,  20.0, -5.0 },
		{  18.0, -15.0,  4.0 },
		{   5.0,  -4.0,  1.0 }
	};

	double B[3][3];

	matriz3x3_inversa(B, A);

	MATRIX_3X3_DOUBLES_EQUAL(esperado, B, 1e-6);
}

TEST(tests_matriz3x3_inversa, Teste210200201)
{
	double A[3][3] = {
		{ 2.0, 1.0, 0.0 },
		{ 2.0, 0.0, 0.0 },
		{ 2.0, 0.0, 1.0 }
	};

	double esperado[3][3] = {
		{ 0.0,  0.5, 0.0 },
		{ 1.0, -1.0, 0.0 },
		{ 0.0, -1.0, 1.0 }
	};

	double B[3][3];

	matriz3x3_inversa(B, A);

	MATRIX_3X3_DOUBLES_EQUAL(esperado, B, 1e-6);
}