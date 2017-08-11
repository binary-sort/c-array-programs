#include <stdio.h>
#include "utils.h"

void print_array(int arr[], int n) {
	int i;

	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
}

void print_array_2d(int n,int m,int arr[m][n]) {
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
