int divisores(int a, int b[]){
	int i;
	int num_elem = 0;
	if(a>0){
		for(i=1;i<=a;i++){
			if(a%i == 0){
				b[num_elem]=i;
				num_elem++;
			}
		}
	}
	return num_elem;
}
