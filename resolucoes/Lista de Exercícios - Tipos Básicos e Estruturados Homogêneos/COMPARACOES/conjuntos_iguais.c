int conjuntos_iguais(int array_1[], int array_2[], int tam_array){	
	int i;
	for(i=0;i<tam_array;i++){
		if(existe(array_1,tam_array,array_1[i]) != existe(array_2,tam_array,array_1[i])) return 0;
		//LINK PARA A FUNÇÃO existe
		//https://github.com/kevinoliveira/Monitoria_LPI/blob/master/resolucoes/Lista%20de%20Exerc%C3%ADcios%20-%20Tipos%20B%C3%A1sicos%20e%20Estruturados%20Homog%C3%AAneos/COMPARACOES/existe.c
	}
	return 1;
}
