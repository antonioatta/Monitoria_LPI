float compoe(int a, int b){
	float c = (float) b;
	while(c>1) c*=0.1;
	c+=(float)a;
	return c;
}

