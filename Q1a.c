//Q1(a) Find the average distance between two points on a straight line made of N(=6) discrete points

#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int n;
	printf("Please input the number of equidistant points:");
	scanf("%d", &n);

	float sum = 0;
	int total_pairs = n*n;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			sum += abs(j - i);
		}
	}

	float avg_distance = sum/total_pairs;

	printf("The average distance between two points is %.4f", avg_distance, "units.");

	return 0;
}

/*

Please input the number of equidistant points:6                                                                                                                                                                            
The average distance between two points is 1.9444 

*/