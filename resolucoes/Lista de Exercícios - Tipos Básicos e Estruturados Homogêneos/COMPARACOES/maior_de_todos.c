int maior_de_todos(int a[], int b){
	int index = 0,i;
	for(i=0;i<b;i++){
		if(a[i]>a[index]){
			index=i;
		}
	}
	return index;
}
