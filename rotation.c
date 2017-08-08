/* This program rotates array (left and right)*/
#include <stdio.h>

void left_rotate(int size,int rotation,int array[]){
	int temp, rotation_count,index;
	for(rotation_count=0;rotation_count<rotation;rotation_count++){
		temp = array[0];
		for(index=0;index<size-1;index++){
			array[index]=array[index+1];
		}
		array[index] = temp;
	}
}

void right_rotate(int size,int rotation,int array[]){
	int temp, rotation_count, index;
	for(rotation_count=0;rotation_count<rotation;rotation_count++){
		temp = array[size-1];
		for (index=size-1;index>0;index--) {
			array[index] = array[index-1];
		}
		array[index] = temp;
	}
}

void right_rotate_another(int size,int rotation,int array[]){
	int temp = array[0],count,index = 0,temp1;
	for(count=0;count<size;count++){
		temp1 = temp;
		temp = array[(index+rotation+size)%size];
		array[(index+rotation+size)%size] = temp1;
		index = (index+rotation+size)%size;
	}
}

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
