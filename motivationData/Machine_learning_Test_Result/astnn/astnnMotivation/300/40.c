int main(){
  int a_1[6]={100,50,20,10,5,1};
	int b[6];
  int n=0,i=0,k=0;
	for(i=0;i<6;i++) 
		b[i]=0;

  scanf("%d",&n);

  for(k=0;k<6;k++)
		for(i=0;n>=a_1[k];i++){
			n=n-a_1[k];
			b[k]+=1;
		}

  for(i=0;i<6;i++) 
		printf("%d\n",b[i]);

  return 0;
}