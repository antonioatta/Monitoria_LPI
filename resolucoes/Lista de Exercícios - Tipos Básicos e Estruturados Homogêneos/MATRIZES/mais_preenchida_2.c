int mais_preenchida_2(char a[10][10]){
	int i,j;
	int contador_linha=0,contador_couluna=0;
	int maximo_linha=0,maximo_coluna=0;
	int linha=0,coluna=0;

	for(i=0;i<10;i++){
		for(j=0;j<10;j++){
			if(a[i][j]=='*') contador_linha++;
		}

		if(contador_linha>maximo_linha){
			linha=i;
			maximo_linha=contador_linha;
		}
		contador_linha=0;
	}
	for(j=0;j<10;j++){
		for(i=0;i<10;i++){
			if(a[i][j]=='*') contador_couluna++;
		}

		if(contador_couluna>maximo_coluna){
			coluna=j;
			maximo_coluna=contador_couluna;
		}
		contador_couluna=0;
	}

	if(maximo_linha>=maximo_coluna){
		return linha;
	}else{ 
		return (coluna+1)*-1;
	}
}
