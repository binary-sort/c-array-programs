#include<stdio.h>
#include "prob_12.h"

int main()
{
    int arrival[] = {1, 4, 6, 2, 9,4};
    int exit[] = {2, 6, 8, 12, 10,6};
    int n = sizeof(arrival)/sizeof(arrival[0]);
    findMaxGuests(arrival, exit, n);
    return 0;
}
