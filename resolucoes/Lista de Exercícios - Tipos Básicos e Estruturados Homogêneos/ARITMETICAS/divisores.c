int divisores(int dividendo, int array_div[]){
	int i;
	int num_elem_validos = 0;
	if(dividendo>0){
		for(i=1;i<=dividendo;i++){
			if(dividendo%i == 0){
				array_div[num_elem_validos]=i;
				num_elem_validos++;
			}
		}
	}
	return num_elem_validos;
}
