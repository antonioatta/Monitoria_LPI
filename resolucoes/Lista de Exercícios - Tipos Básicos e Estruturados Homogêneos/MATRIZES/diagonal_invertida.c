void diagonal_invertida(int a[10][10]){
	int i,j,aux;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i>j){
				aux=a[i][j];
				a[i][j]=a[j][i];
				a[j][i]=aux;
			}
		}
	}
}
