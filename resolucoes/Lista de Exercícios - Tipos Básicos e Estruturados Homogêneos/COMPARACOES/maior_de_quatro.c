int maior_de_quatro(int a, int b, int c, int d){
	int maior;
	maior = maior_de_dois(a,b);
	maior = maior_de_dois(maior,c);
	maior = maior_de_dois(maior,d);
	return maior;
}
