//taking input and printing it in two dimensional array

#include<stdio.h>
void main(){
	int r,c;
    printf("enter the size of row and column : ");
	scanf("%d%d",&r,&c);
	int a[r][c];
    printf("enter the array elements : ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}	
}