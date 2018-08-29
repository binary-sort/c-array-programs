// #include <stdio.h>

int max(int a[],int n){
  int m = a[0],r=0;
  int i;
  for(i=1;i<n;i++){
    if(a[i]>m){
      m = a[i];
      r = i;
    }
  }
  return r;
}

int max_repeating_num(int a[],int n){
  int k = a[max(a,n)]+1,i;
  for(i=0;i<n;i++){
    a[a[i]%k] += k;
  }
  print_array(a,n);
  return max(a,n);
}
