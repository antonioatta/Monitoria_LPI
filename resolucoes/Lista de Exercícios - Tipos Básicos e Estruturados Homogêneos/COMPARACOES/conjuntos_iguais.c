int conjuntos_iguais(int a[], int b[], int c){	
	int i;
	for(i=0;i<c;i++){
		if(existe(a,c,a[i]) != existe(b,c,a[i])) return 0;
	}
	return 1;
}
