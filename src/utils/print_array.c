#include <stdio.h>
#include "utils.h"

void print_array(int arr[], int n) {
	int i;

	for(i=0;i<n;i++){
		printf("%d ", arr[i]);
	}

	printf("\n");
}