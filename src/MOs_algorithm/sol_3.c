#include <stdio.h>

void sol_3(int a[], int n, int q[][2], int m){
  int i,j,x,y,sum;
  for(i=1;i<n;i++){
    a[i] = a[i]+a[i-1];
  }
  for(i=0;i<m;i++){
    x = q[i][0];
    y = q[i][1];
    if(x==0){
      sum = a[y];
    }
    else{
      sum = a[y]-a[x-1];
    }
    printf("%d\n", sum);
  }
}
