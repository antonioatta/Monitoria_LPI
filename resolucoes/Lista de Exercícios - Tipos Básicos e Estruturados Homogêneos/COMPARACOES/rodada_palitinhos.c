int rodada_palitinhos(int a[], int b[], int c){
	int i, palitinhos_em_jogo=0,numero_ganhador=-1;
	for(i=0;i<c;i++)
		palitinhos_em_jogo+=a[i];
	
	for(i=0;i<c;i++){
		if(b[i]==palitinhos_em_jogo){
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
