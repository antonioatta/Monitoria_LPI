void calcula_media(int a[][3], float b[], int c){
	int i;
	for(i=0;i<c;i++)
		b[i]=(float)(a[i][0]+a[i][1]+a[i][2])/(float)3;
}
