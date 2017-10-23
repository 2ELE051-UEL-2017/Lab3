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

double array_max2(double v[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 3 sobre vetores
	return 0.0;
}

void array_inverte(double res[], double v[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 4 sobre vetores
}

int array_numNegativos(double v[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 5 sobre vetores
	return 0;
}

double array_media(double v[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 6 sobre vetores
	return 0.0;
}

void array_copia(double a[], double b[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 7 sobre vetores
}
