#include<stdio.h>
#include "prob_12.h"

int main()
{
    int arrival[] = {1, 2, 10, 5, 5};
    int exit[] = {4, 5, 12, 9, 12};
    int n = sizeof(arrival)/sizeof(arrival[0]);
    findMaxGuests(arrival, exit, n);
    return 0;
}
