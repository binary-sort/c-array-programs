#include<stdio.h>
void first_repeated_element(int *arr, int n)
{
  int i,j;
  int index,element;

	for(i=0; i<n; i++)
	{
		for(j=i+1; j<n; j++)
		{
			if(arr[i]==arr[j])
			{
				element=arr[j];
				index=j;
				break;
			}
		}
	}
	if(index!=-1)
		printf("first repeated element is %d at index %d\n",element,index);
	else
		printf(" no repeated element\n");
}
