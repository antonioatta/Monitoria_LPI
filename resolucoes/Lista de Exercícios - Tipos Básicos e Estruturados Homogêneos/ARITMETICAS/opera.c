float opera(float num_1,float num_2,int operador){
	switch(operador){
		case 0:
			return num_1+num_2;
		case 1:
			return num_1-num_2;
		case 2:
			return num_1*num_2;
		case 3:
			return num_1/num_2;
		default:
			printf("Entrada incorreta\n");
	}
}
