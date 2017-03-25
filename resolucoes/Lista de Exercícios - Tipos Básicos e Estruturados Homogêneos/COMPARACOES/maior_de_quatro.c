int maior_de_quatro(int num_1, int num_2, int num_3, int num_4){
	int maior;
	maior = maior_de_dois(num_1,num_2);
	maior = maior_de_dois(maior,num_3);
	maior = maior_de_dois(maior,num_4);
	//LINK PARA A FUNÇÃO maior_de_dois
	//https://github.com/kevinoliveira/Monitoria_LPI/blob/master/resolucoes/Lista%20de%20Exerc%C3%ADcios%20-%20Tipos%20B%C3%A1sicos%20e%20Estruturados%20Homog%C3%AAneos/COMPARACOES/maior_de_dois.c
	return maior;
}
