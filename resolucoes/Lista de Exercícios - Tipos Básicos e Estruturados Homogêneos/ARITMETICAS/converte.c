int converte(int a[], int b){
	int i, resultado = 0;

	for(i=0;i<b;i++){
		resultado+=a[i]*(int)pow((double)2,(double)(b-1)-i);
	}

	return resultado;
}

