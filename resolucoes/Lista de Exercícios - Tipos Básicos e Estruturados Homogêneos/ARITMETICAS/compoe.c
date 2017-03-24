float compoe(int a, int b, int d){
	float c = (float) b;
	//movendo uma casa para direita até que o numero seja menor que 1
	while(c>1) c*=0.1;
	//"adicionado" zeros apos a virgula, movendo d casas para direita
	while(d>0){
		c*=0.1;
		d--;
	}
	c+=(float)a;
	return c;
}
