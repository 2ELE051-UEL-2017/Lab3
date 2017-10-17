int array_iguais(double a[], double b[], int numElementos)
{
	int i;

	for (i = 0; i < numElementos; i++)
	{
		if (a[i] != b[i])
			return 0;
	}

	return 1;
}

double array_max(double v[], int numElementos)
{
	double s = v[0];
	int i;

	for (i = 1; i < numElementos; i++)
	{
		if (v[i] > s)
			s = v[i];
	}

	return s;
}