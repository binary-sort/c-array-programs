/* This program rotates array (left and right)*/
#include <stdio.h>

void main(){
	int size, rotation, index, direction; // n defines size of array
	printf("Enter length of array: ");
	scanf("%d",&size);
	int array[size]; // array
	printf("Enter elements of array (space separated):\n");
	for(index=0;index<size;index++){
		scanf("%d",&array[index]);
	}
	printf("Enter number of rotation: ");
	scanf("%d",&rotation);
	printf("Enter direction 0 for left and 1 for right:\n");
	scanf("%d", &direction);
	if(direction==0){
		left_rotate(size,rotation,array);
	}
	else if(direction==1){
		right_rotate(size,rotation,array);
	}
	else{
		printf("Enter correct direction.\n");
	}
	for (index=0;index<size;index++) {
		printf("%d ", array[index]);
	}
}
