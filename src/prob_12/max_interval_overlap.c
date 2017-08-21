#include<stdio.h>
#include "prob_12.h"

int main()
{
    int arrival[] = {0, 3, 4, 7, 1};
    int exit[] = {2, 7, 6, 8, 5};
    int n = sizeof(arrival)/sizeof(arrival[0]);
    findMaxGuests(arrival, exit, n);
    return 0;
}
