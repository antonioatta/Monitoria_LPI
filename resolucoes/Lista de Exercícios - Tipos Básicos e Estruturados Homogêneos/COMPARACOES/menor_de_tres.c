int menor_de_tres(int num_1, int num_2, int num_3){
	int aux;
	
	if(num_1<num_2) aux = num_1;
	else aux = num_2;

	if(aux<num_3) return aux;
	else return num_3;
}
