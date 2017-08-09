int return_min_num(int array[],int size){
  int sum=0,index;
  for(index=0;index<size;index++){
    sum += array[index];
  }
  return (sum%2==0)?2:1;
}
