#include<stdio.h>
#include<math.h>
int fact(int );
int main(){
	int degree;
	printf("enter the degree : ");
	scanf("%d",&degree);
	
	float x = (degree*3.14)/180;
	float sinX,cosX;
	
	sinX = x-(pow(x,3)/fact(3))+(pow(x,5)/fact(5))+(pow(x,7)/fact(7));
	
	cosX = 1-(pow(x,2)/fact(2))+(pow(x,4)/fact(4))+(pow(x,6)/fact(6));
	
	printf("sin(%d) = %f\n",degree,sinX);
	printf("cos(%d) = %f\n",degree,cosX);
	 
	printf("sinx using bilt-in function = %f\n",sin(x));
	printf("cosx using bilt-in function =%f",cos(x));
	
	return 0;
}

int fact(int n){
	int facto=1;
	for(int i=2; i<=n;i++){
		facto *= i;
	}
	return facto;
}
/*enter the degree : 45
sin(45) = 0.706898
cos(45) = 0.708035
sinx using bilt-in function = 0.706825
cosx using bilt-in function =0.707388
[Program finished]/
