void deletion(int *arr,int size, int n)
{
  int i, found=0,pos;
    for( i=0;i < size;i++)
    {
        if(arr[i] == n)
        {
           found = 1;
            pos = i;
            break;
        }
  }
if(found == 1)
  {
    for(i=pos;i < size-1;i++)
         {
              arr[i]=arr[i+1];
          }
   }

}
