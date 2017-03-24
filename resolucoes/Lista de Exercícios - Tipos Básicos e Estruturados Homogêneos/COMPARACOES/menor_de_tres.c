int menor_de_tres(int a, int b, int c){
	int aux;
	
	if(a<b) aux = a;
	else aux = b;

	if(aux<c) return aux;
	else return c;
}
