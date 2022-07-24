<<<<<<< HEAD
//taking input and printing it in two dimensional array//

#include<stdio.h>
void main(){
	int r,c;
    printf("enter the size of row and column : ");
	scanf("%d%d",&r,&c);
	int a[r][c];
    printf("enter the array elements : ");
	for(int i=0;i<r;i++){
=======
#include<stdio.h>
void main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int a[r][c];
	for(int i=0;i<r;i++){;
>>>>>>> 1ec6b44fa82be0b988ddb539e33262368bbe0440
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
<<<<<<< HEAD
/*output:
enter the size of row and column :  2 2
enter the array elements : 1 2 3 4
1 2
3 4  */
=======
>>>>>>> 1ec6b44fa82be0b988ddb539e33262368bbe0440
