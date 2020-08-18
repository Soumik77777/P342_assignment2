//Q1(b) Find the average distance between two points on a 6 by 6 two dimentional grid.

#include <stdio.h>
#include<stdlib.h>


int main(){
	
	int n;
	printf("Please enter the number of equidistant points:");
	scanf("%d", &n);

	float sum = 0;
	int total_points = n*n;
	int total_pairs = total_points * total_points;

	int points[total_points][2];
	int position = 0;

	for (int i = 0; i < n; i++){
		for (int j = 0; j < n; j++){
			points [position][0] = i;
			points [position][1] = j;
			position++;

		}
	}

	
	for (int i = 0; i < total_points; i++){
		int x1 = points[i][0];
		int y1 = points[i][1] ;
		for (int j = 0; j < total_points; j++){
			int x2 = points[j][0];
			int y2 = points[j][1] ;
			sum += abs(x2-x1)+abs(y2-y1);
		}
	}

	float avg_distance = sum/total_pairs;

	printf("The average distance between two points is %.4f", avg_distance);
}
/*

Please enter the number of equidistant points:6                                                                                                                                                                            
The average distance between two points is 3.8889

*/