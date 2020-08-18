//Q3. Create 3*3 matrices M and N with numbers of your choices in two separate files. Read the matrices from the files. Find M x A and M x N. [A is a vector]


#include <stdio.h>
#include <stdlib.h>

int main()
{   
    
    int A[] = {10,0,1};
	
	int M[3][3];
	int N[3][3];
	FILE *x;
	FILE *y;

	x = fopen("matrix_m.txt","r");
	if (x == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(x, "%d ", &M[i][j]);
		}
	}
	printf("Matrix M = \n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", M[i][j]);
		}
		printf("\n");
	}



	y = fopen("matrix_n.txt", "r");
	if (y == NULL)
		exit(0);

	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			fscanf(y, "%d ", &N[i][j]);
		}
	}
	printf("\nMatrix N =\n");
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			printf("%d ", N[i][j]);
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
			MA[i] += (A[j] * M[i][j]);
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
				MN[i][j] = MN[i][j] + M[i][k] * N[k][j];
			printf("%d ", MN[i][j]);
		}
		printf("\n");
	}
}


/*

Matrix M =
5 10 7
9 -2 3
0 17 3

Matrix N =
1 3 -5
-2 0 7
2 6 11

M x A =
57
93
3

M x N =
 -1 57 122
19 45 -26
-28 18 152

*/
