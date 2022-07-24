#include<stdio.h>
#include<limits.h>
void main(){
	int m;
	printf("enter the size of the array : ");
	scanf("%d",&m);
	int arr[m];
	printf("enter the array elements : ");
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	int max=INT_MIN;
	int min=INT_MAX;
	for(int j=0;j<m;j++){
		if(arr[j]>max){
		 max=arr[j];
		}
		if(arr[j]<min){
			min=arr[j];
		}
	}
	printf("Max = %d\n",max);
	printf("Min = %d",min);
}