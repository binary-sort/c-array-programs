void right_rotate(int size,int rotation,int array[]){
	int temp, rotation_count, index;
	for(rotation_count=0;rotation_count<rotation;rotation_count++){
		temp = array[size-1];
		for (index=size-1;index>0;index--) {
			array[index] = array[index-1];
		}
		array[index] = temp;
	}
}
