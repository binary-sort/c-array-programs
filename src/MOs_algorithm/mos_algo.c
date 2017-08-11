#include <stdio.h>
#include <math.h>

int block;
int compare(int *x,int *y){
    // int* a = (int *)x;
    // int* b = (int *)y;
    // printf("%d\n",x[0]);
    // printf("%d\n", x[0][0]);
    if (x[0]/block != y[0]/block)
        return x[0]/block < y[0]/block;
    return x[1] < y[1];
}
void mos_algo(int a[], int n,int q[][2], int m)
{   int i;
    block = (int)sqrt(n);
    qsort(q,m,sizeof(q),compare);
    int currL = 0, currR = 0;
    int currSum = 0;
    for (i=0; i<m; i++){
        int L = q[i][0], R = q[i][1];
        while (currL < L){
            currSum -= a[currL];
            currL++;
        }
        while (currL > L){
            currSum += a[currL-1];
            currL--;
        }
        while (currR <= R){
            currSum += a[currR];
            currR++;
        }
        while (currR > R+1){
            currSum -= a[currR-1];
            currR--;
        }
        printf("%d\n", currSum);
    }
}
