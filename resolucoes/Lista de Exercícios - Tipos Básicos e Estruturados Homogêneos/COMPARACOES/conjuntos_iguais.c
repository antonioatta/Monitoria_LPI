int conjuntos_iguais(int a[], int b[], int c){	
	int i;
	for(i=0;i<c;i++){
		if(existe(a,c,a[i]) != existe(b,c,a[i])) return 0;
		//LINK PARA A FUNÇÃO existe
		//https://github.com/kevinoliveira/Monitoria_LPI/blob/master/resolucoes/Lista%20de%20Exerc%C3%ADcios%20-%20Tipos%20B%C3%A1sicos%20e%20Estruturados%20Homog%C3%AAneos/COMPARACOES/existe.c
	}
	return 1;
}
