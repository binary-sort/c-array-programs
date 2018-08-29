#include <stdio.h>
#include <string.h>

void rabin_karp(char txt[]){
  int d=256,q=101;
  int i,j;
  int p=txt[0]%q,t=txt[1]%q,h=1;
  int n = strlen(txt);
  printf("Yes\n");
  for(i=1;i<n;i++){
    if(p==t){
      for(j=0;j<i/2;j++){
        if(txt[j]!=txt[i-j]){
          break;
        }
      }
      if(j==i/2){
        printf("Yes\n");
      }
      else{
        printf("No\n");
      }
    }
    else
    printf("No\n");

    if(i!=n-1){
      if(i%2==0){
        h = (h*d)%q;
        p = (p+h*txt[i/2])%q;
        t = (d*t+txt[i+1])%q;
      }
      else{
        t = (d*(t + q - txt[(i+1)/2]*h)%q+ txt[i+1])%q;
      }
    }
  }
}
