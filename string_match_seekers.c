/*
C program to find the numbers of times a string 'seekers'
can be formed from a given string
*/

#include<stdio.h>


int main()
{
  /*
  char array initialized
  */
  char arr[]="ssdjadwfuweifeekrssejbfjlkrrwgrssekktaserskk";
  int i,count_s=0,count_e=0,count_k=0,count_r=0;
  int k[4],min;

  //loop starts from here to match chars of string
  /*
  loop will count the number of time characters of string "seekers"
  i.e s, e,k,r appear in the given string. Count of s,e,k,r will
  be stored in a new array say k.
  */
  for(i=0; i < sizeof(arr);i++)
  {
    if(arr[i]=='s')
    {
      count_s=count_s+1;
      k[0]=count_s;
    }
    else
      if(arr[i]=='e')
      {
        count_e=count_e+1;
        k[1]=count_e;
      }
      else
        if(arr[i]=='k')
        {
          count_k=count_k+1;
          k[2]=count_k;
        }

        else
          if(arr[i]=='r')
          {
            count_r=count_r+1;
            k[3]=count_r;
          }

        else
           continue;
         }

      min=k[0]; // min initialized to first element of k

      for ( i = 1; i < 4; i++)
       {
        if(min>k[i])
        {
          min=k[i];
        }

      }
      printf("%d", min );
      printf("\n" );

      return 0;


}
