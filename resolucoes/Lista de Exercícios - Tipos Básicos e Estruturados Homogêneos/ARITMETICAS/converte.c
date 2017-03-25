#include <math.h>
// INCLUA -lm no final do comando se for compilar com GCC

int converte(int bits[], int num_bits_validos){
	int i, resultado = 0;

	for(i=0;i<num_bits_validos;i++){
		resultado+=bits[i]*(int)pow((double)2,(double)(num_bits_validos-1)-i);
	}

	return resultado;
}

