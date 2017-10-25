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

void vetor_soma(double c[], double a[], double b[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 8 sobre vetores
}

double vetor_norma(double v[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 9 sobre vetores
	return 0.0;
}

double vetor_produtoEscalar(double a[], double b[], int numElementos)
{
	// Digite aqui o seu codigo do exercicio 10 sobre vetores
	return 0.0;
}

void matriz3x3_identidade(double A[][3])
{
	// Digite aqui o seu codigo do exercicio 1 sobre matrizes
}

int matriz3x3_iguais(double A[][3], double B[][3])
{
	// Digite aqui o seu codigo do exercicio 2 sobre matrizes
	return 0;
}

void matriz3x3_transposta(double B[][3], double A[][3])
{
	// Digite aqui o seu codigo do exercicio 3 sobre matrizes
}

int matriz3x3_simetrica(double A[][3])
{
	// Digite aqui o seu codigo do exercicio 4 sobre matrizes
	return 0;
}

void matriz3x3_soma(double C[][3], double A[][3], double B[][3])
{
	// Digite aqui o seu codigo do exercicio 5 sobre matrizes	
}

void matriz3x3_diferenca(double C[][3], double A[][3], double B[][3])
{
	// Digite aqui o seu codigo do exercicio 6 sobre matrizes	
}

double matriz3x3_traco(double A[][3])
{
	// Digite aqui o seu codigo do exercicio 7 sobre matrizes
	return 0.0;
}

double matriz3x3_determinante(double A[][3])
{
	// Digite aqui o seu codigo do exercicio 8 sobre matrizes
	return 0.0;
}

void matriz3x3_produtoVetorColuna(double C[][1], double A[][3], double B[][1])
{
	// Digite aqui o seu codigo do exercicio 9 sobre matrizes
}
