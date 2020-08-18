//#Create two vectors of type A=(a1,a2,a3) and B=(b1,b2,b3) with numbers of your choice (not random) in the code itself. Then Find A+B and A.B.


#include <stdio.h>
#include <stdlib.h>

int main()
{
	int A[3] = {10,0,1};

printf("Vector A = [");
    for (int i = 0; i < 3; i++)
    	printf("  %d  ", A[i]);
printf("]");

    int B[3] = {-4,3,7};
    
printf("\nVector B = [");
    for (int i = 0; i < 3; i++)
    	printf("  %d  ", B[i]);
printf("]");

	
	int sum[3], dotproduct=0;

	for (int i=0;i<3;i++)
    {
        sum[i] = A[i] + B[i];
    }

	printf("\nA + B = [");
	for (int i = 0; i < 3; i++)
		printf("  %d  ", sum[i]);
	printf("]");

    
    for (int i = 0; i < 3; i++)
	{
		dotproduct += (A[i] * B[i]);
	}

	printf("\nA.B= %d\n", dotproduct);

}


/*


Vector A = [  10    0    1  ]                                                                                                                                                                                              
Vector B = [  -4    3    7  ]                                                                                                                                                                                              
A + B = [  6    3    8  ]                                                                                                                                                                                                  
A.B= -33                                                                                                                                                                                                                   
         
*/