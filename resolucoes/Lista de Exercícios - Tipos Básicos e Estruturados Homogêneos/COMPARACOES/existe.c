int existe(int a[], int b, int c){
	int i,counter = 0;
	for(i=0;i<b;i++){
		if(a[i]==c) counter++;
	}
	return counter;
}
