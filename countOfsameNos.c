#include<stdio.h>
int main(){
	int m;
	printf("enter the size of the array : ");
	scanf("%d",&m);
	int arr[m];
	printf("enter the array elements : ");
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	int x;
	int count=0;
	printf("enter the number : ");
	scanf("%d",&x);
    for(int i=0;i<m;i++){
    	if(arr[i]==x){
    		count++;
    	}
    }
    printf("Count = %d",count);
    
	return 0;
}