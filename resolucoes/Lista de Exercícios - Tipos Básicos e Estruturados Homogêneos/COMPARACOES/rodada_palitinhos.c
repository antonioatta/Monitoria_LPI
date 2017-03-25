int rodada_palitinhos(int array_palitinhos[], int array_palpites[], int tam_array){
	int i, palitinhos_em_jogo=0,numero_ganhador=-1;
	for(i=0;i<tam_array;i++)
		palitinhos_em_jogo+=array_palitinhos[i];
	
	for(i=0;i<tam_array;i++){
		if(array_palpites[i]==palitinhos_em_jogo){
			//primeiro jogador a acertar a contagem
			if(numero_ganhador==-1)
				numero_ganhador=i;
			//segundo jogardor a acertar a contagem
			//empate, portanto sem vencedores
			else
				return -1;
		}
	}
	//-1 se ninguem acertou
	//ou numero do jogador que ganhou
	return numero_ganhador;
}
