int find_index_binary(int array[],int start,int end,int number){
  int mid = (start+end)/2;
  if(number==array[mid]){
    return mid;
  }
  else if(number<array[mid]){
    return find_index_binary(array,start,mid,number);
  }
  else{
    return find_index_binary(array,mid,end,number);
  }
}
