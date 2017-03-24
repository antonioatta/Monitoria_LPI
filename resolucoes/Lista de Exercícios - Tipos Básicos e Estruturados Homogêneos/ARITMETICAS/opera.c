float opera(float a,float b,int c){
	switch(c){
		case 0:
			return a+b;
		case 1:
			return a-b;
		case 2:
			return a*b;
		case 3:
			return a/b;
		default:
			printf("Entrada incorreta\n");
	}
}
