#include <stdio.h>
#include <stdlib.h>
int cmpfunc (const void * a, const void * b)
{
   return ( *(int*)a - *(int*)b );
}
void findMaxGuests(int arrival[], int exit[], int n)
{

   qsort(arrival, arrival+n,sizeof(int),cmpfunc);
   qsort(exit, exit+n,sizeof(int),cmpfunc);
   int guestsin = 1, max_guests = 1, time = arrival[0];
   int i = 1, j = 0;
   while (i < n && j < n)
   {
      if (arrival[i] <= exit[j])
      {
          guestsin++;
          if (guestsin > max_guests)
          {
              max_guests = guestsin;
              time = arrival[i];
          }
          i++;
      }
      else
      {
          guestsin--;
          j++;
      }
   }

   printf("max number of guests %d at time %d", max_guests,time);
}
