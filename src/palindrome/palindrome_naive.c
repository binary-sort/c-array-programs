#include <stdio.h>

int palindrome_naive(char string[],int size){
  int i,j,flag;
  for(i=0;i<size;i++){
    flag = 0;
    for(j=0;j<i/2;j++){
      if(string[j]!=string[i-j]){
        flag = 1;
        break;
      }
    }
    if(flag==0){
      printf("Yes\n");
    }
    else{
      printf("No\n");
    }
  }
}
