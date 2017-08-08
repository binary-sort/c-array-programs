#include <stdio.h>

void sort(int size;int array[]){
}

void main() {
  int size, index;
  printf("Enter size of array: ");
  scanf("%d",&size);
  int array[size];
  printf("Enter elements of array (space separated):\n");
	for(index=0;index<size;index++){
		scanf("%d",&array[index]);
	}
  sort(size,array);
  for(index=0;index<size;index++){
    printf("%d ",array[index]);
  }
}
