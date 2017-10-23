#include "CppUTest/TestHarness.h"

void VECTOR_DOUBLES_EQUAL(double expected[], double actual[], double tolerance, int numElementos)
{
	int i;

	for (i = 0; i < numElementos; i++)
		DOUBLES_EQUAL(expected[i], actual[i], tolerance);
}
