int given_sum_subset(int array[],int size,int sum){
  int temp = sum;
  if(temp==0){
    return 1;
  }
  if(size==0){
    return 0;
  }
  if(array[size-1]>temp){
    return given_sum_subset(array,size-1,temp);
  }
  return given_sum_subset(array,size-1,temp) || given_sum_subset(array,size-1,temp-array[size-1]);
}
