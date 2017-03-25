float compoe(int parte_inteira, int parte_fracionaria, int zeros_pos_virgula){
	float aux = (float) parte_fracionaria;
	//movendo uma casa para direita até que o numero seja menor que 1
	while(aux>1) aux*=0.1;
	//"adicionado" zeros apos a virgula, movendo zeros_pos_virgula casas para direita
	while(zeros_pos_virgula>0){
		aux*=0.1;
		zeros_pos_virgula--;
	}
	aux+=(float)parte_inteira;
	return aux;
}
