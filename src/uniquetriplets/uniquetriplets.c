#include <stdio.h>

void uniquetriplets(int a[],int n,int sum) {
  merge_sort(a,0,n);
  int i,j,k;
  for(i=0;i<n-2;i++){
    j = i+1;
    k = n-1;
    while(j<k){
      if(a[i]+a[j]+a[k]==sum){
        printf("%d %d %d\n",a[i],a[j],a[k]);
      }
      j++;
      k--;
    }
  }
}
