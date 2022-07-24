//inserting an element at the end of an array// 
#include<stdio.h>
void main(){
	int m,x;
	printf("enter the size of the array : ");
	scanf("%d",&m);
	int arr[m];
	printf("enter the array elements : ");
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	printf("enter the element to be inserted :  ");
	scanf("%d",&x);
	arr[m]=x;
	printf("the array after insertion is : \n");
	for(int i=0;i<=m;i++){
		printf("%d\t",arr[i]);
	}
}

/*output :
enter the size of the array : 5
enter the array elements : 1 2 3 4 5
enter the element to be inserted :  6
the array after insertion is :
1       2       3       4       5       6
[Program finished]*/
		
		
	