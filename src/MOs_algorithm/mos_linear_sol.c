#include <stdio.h>

int mos_linear_sol(int array[],int a_size,int query[][2],int q_size){
  int q_index, a_index, l, r, sum;
  for(q_index=0;q_index<q_size;q_index++){
    l = query[q_index][0];
    r = query[q_index][1];
    sum = 0;
    for(a_index=l;a_index<=r;a_index++){
      sum += array[a_index];
    }
    printf("%d\n", sum);
  }
}
