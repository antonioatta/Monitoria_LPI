void diagonal_invertida(int matriz[10][10]){
	int i,j,aux;
	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(i>j){
				aux=matriz[i][j];
				matriz[i][j]=matriz[j][i];
				matriz[j][i]=aux;
			}
		}
	}
}
