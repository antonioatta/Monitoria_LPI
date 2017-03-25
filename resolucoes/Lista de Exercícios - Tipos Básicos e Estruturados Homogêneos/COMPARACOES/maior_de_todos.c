int maior_de_todos(int numeros[], int tam_array){
	int index = 0,i;
	for(i=0;i<tam_array;i++){
		if(numeros[i]>numeros[index]){
			index=i;
		}
	}
	return index;
}
