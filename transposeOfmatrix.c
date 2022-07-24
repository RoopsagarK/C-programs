//printing the transpose of the given matrix

#include<stdio.h>
int main(){
	int r,c;
	printf("enter the size of the array : ");
	scanf("%d%d",&r,&c);
	int arr[r][c];
	printf("enter the array elements : ");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
		scanf("%d",&arr[i][j]);
		}
	}
	printf("the given matrix is : \n");
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf(" %d",arr[i][j]);
		}
		printf("\n");
	}
	printf("transpose of the matrix : \n");
		for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			printf(" %d",arr[j][i]);
		}
		printf("\n");
		}
    }
/* output:
enter the size of the array : 2 2

enter the array elements : 1 2 3 4

the given matrix is :

 1 2

 3 4

transpose of the matrix :

 1 3

 2 4

[Program finished] */
