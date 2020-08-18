//Q3. Create 3*3 matrices M and N with numbers of your choices in two separate files. Read the matrices from the files. Find M x A and M x N. [A is a vector]


#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    int A[] = {10,0,1};
	
	int Matrix_M[3][3];
	int Matrix_N[3][3];
	FILE *x;
	FILE *y;

	x = fopen("matrix_m.txt","a");
	if (x == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(x, "%d ", &Matrix_M[i][j]);
		}
	}
	printf("Matrix M = \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", Matrix_M[i][j]);
		}
		printf("\n");
	}



	y = fopen("matrix_n.txt", "a");
	if (y == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(y, "%d ", &Matrix_N[i][j]);
		}
	}
	printf("\nMatrix N =\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", Matrix_N[i][j]);
		}
		printf("\n");
	}


// M x A
	int MA[3] = {0,0,0};

	printf("\nM x A =\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MA[i] += (A[j] * Matrix_M[i][j]);
		}
		printf("%d\n", MA[i]);
	}


// M x N
	int MN[3][3];
	printf("\nM x N =\n ");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			MN[i][j] = 0;
			for (int k = 0; k < 3; k++)
				MN[i][j] = MN[i][j] + Matrix_M[i][k] * Matrix_N[k][j];
			printf("%d ", MN[i][j]);
		}
		printf("\n");
	}
}