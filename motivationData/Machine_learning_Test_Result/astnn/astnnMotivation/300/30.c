int main(){
    int a_1[6]={100,50,20,10,5,1},b_1[6];
    int n,i,k;
    scanf("%d",&n);
    for(i=0; i<6; i++)
	b_1[i]=0;
    for(k=0; k<6; k++)
        for(i=0; n>=a_1[k]; i++){
            n=n-a_1[k];
            b_1[k]+=1;
        }
    for(i=0; i<6; i++)
			printf("%d\n",b_1[i]);



    return 0;
}