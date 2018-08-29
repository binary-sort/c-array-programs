int check_elements_in_range(int array[], int size, int start, int end){
  int index;
  for(index=0;index<size;index++){
    if(array[index]<start || array[index]>end){
      return 0;
    }
  }
  return 1;
}
