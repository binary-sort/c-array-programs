int min (int x, int y);
int max (int x, int y) ;
int max_product(int arr[], int n)
{
  if (n<0)
      return 0;
  int maxi=arr[0], mini=arr[0], r=arr[0];
  for(int i=1;i<n;i++)
  {
    if(arr[i]<0)
    { int temp=maxi;
      maxi=max(arr[i], mini*arr[i]);
      mini=min(arr[i], temp*arr[i]);
    }
    else
    {
      maxi=max(arr[i], maxi*arr[i]);
      mini=min(arr[i], mini*arr[i]);
    }
    r=max(maxi,r);
  }
  return r;
}
