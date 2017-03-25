int mais_preenchida(char matriz[10][10]){
	int i,j,contador=0,maximo=0,linha=0;

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(matriz[i][j]=='*') contador++;
		}
		if(contador>maximo){
			linha=i;
			maximo=contador;
		}
		contador=0;
	}
	return linha;
}
