#include <stdio.h>
#define size 10
int gcd(int n1, int n2);
int main()
{
  int arr[size]={2,4,6,9,3,16,12,45,8,76},x;
  x=gcd(arr[0], arr[1]);
  for(int i = 0; i < 10; i++) {
    for(int j = i + 2; j < 10; j++) {

        if(gcd(arr[i],arr[j]) > x)
        {
          x=gcd(arr[i],arr[j]);
        }

    }
}
printf("max GCD: %d", x);
printf("\n");
return 0;
}

int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else
       return n1;
}
