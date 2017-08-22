int naive_max_frequency(int a[],int n){
  int i,j,m,count,prev_count;
  m = 0;
  prev_count = 0;
  for(i=0;i<n;i++){
    count = 0;
    for(j=0;j<n;j++){
      if(a[i]==a[j]){
        count++;
      }
    }
    if(count>prev_count){
      prev_count = count;
      m = a[i];
    }
  }
  return m;
}
