void calcula_media(int array_notas[][3], float array_media[], int num_alunos){
	int i;
	for(i=0;i<num_alunos;i++)
		array_media[i]=(float)(array_notas[i][0]+array_notas[i][1]+array_notas[i][2])/(float)3;
}
