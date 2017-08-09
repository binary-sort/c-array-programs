void left_rotate(int size,int rotation,int array[]){
	int temp, rotation_count,index;
	for(rotation_count=0;rotation_count<rotation;rotation_count++){
		temp = array[0];
		for(index=0;index<size-1;index++){
			array[index]=array[index+1];
		}
		array[index] = temp;
	}
}
