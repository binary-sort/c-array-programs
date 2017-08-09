/*
C program to find pair with maximum GCD in an integer array
*/
#include <stdio.h>
#include "prob_2.h"

#define size 10  //size of array defined

int gcd(int n1, int n2);
/*
main function starts from here
*/
int main()
{
  int arr[size]={2,4,6,9,3,16,12,45,8,76},x,p1=0,p2=0;//array initailzed
  x=gcd(arr[0], arr[1]);
//loop starts from here to find pair with maximum GCD
  for(int i = 0; i < 10; i++) {
    for(int j = i + 2; j < 10; j++) {

        if(gcd(arr[i],arr[j]) > x)
        {
          x=gcd(arr[i],arr[j]);
          p1=arr[i];
          p2=arr[j];
        }

    }
}
printf("pair with max GCD:( %d , %d )", p1, p2);
printf("\n");
return 0;
}


