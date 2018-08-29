int find_index(int array[],int size,int number){
  int index, result=-1;
  for(index=0;index<size;index++){
    if(array[index]==number){
      result = index;
      return result;
    }
  }
  return result;
}
