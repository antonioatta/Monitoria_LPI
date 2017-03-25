int existe(int array_num[], int tam_array, int num_pesq){
	int i,counter = 0;
	for(i=0;i<tam_array;i++){
		if(array_num[i]==num_pesq) counter++;
	}
	return counter;
}
