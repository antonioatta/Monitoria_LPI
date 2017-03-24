int maior_de_quatro(int a, int b, int c, int d){
	int maior;
	maior = maior_de_dois(a,b);
	maior = maior_de_dois(maior,c);
	maior = maior_de_dois(maior,d);
	//LINK PARA A FUNÇÃO maior_de_dois
	//https://github.com/kevinoliveira/Monitoria_LPI/blob/master/resolucoes/Lista%20de%20Exerc%C3%ADcios%20-%20Tipos%20B%C3%A1sicos%20e%20Estruturados%20Homog%C3%AAneos/COMPARACOES/maior_de_dois.c
	return maior;
}
