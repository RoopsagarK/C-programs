#include<stdio.h>
int binary2decimal(int);
void main(){
	int binary;
	printf("enter a binary number : ");
	scanf("%d",&binary);
	printf("decimal value if binary no. %d is : %d",binary,binary2decimal(binary));
}
int binary2decimal(int n){
	if(n==0){
		return 0;
	}else{
		return(n%10+2*(binary2decimal(n/10)));
	}
}

/*
enter a binary number : 10011
decimal value if binary no. 10011 is : 19
[Program finished]* /