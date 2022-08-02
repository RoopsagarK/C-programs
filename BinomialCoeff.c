//Binomial coefficient
#include<stdio.h>
void main(){
	int n,r;
	printf("enter the value of n and r : ");
	scanf("%d%d",&n,&r);
	int factn=1,factr=1,factnMr=1;
	for(int i=1;i<=n;i++){
		factn*=i;
	}
	for(int i=1;i<=r;i++){
		factr*=i;
	}
	for(int i=1;i<=(n-r);i++){
		factnMr*=i;
	}
	int nCr=factn/(factr*factnMr);
	printf("binomial coefficient (nCr)=%d",nCr);
}
/*enter the value of n and r : 2 2
binomial coefficient (nCr)=1
[Program finished]
  
	
		