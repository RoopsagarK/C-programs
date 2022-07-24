//To find out total number of times the number 'x' occurs in a list of array

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

/*output :
enter the size of the array : 5
enter the array elements : 1 2 2 3 2
enter the number : 2
Count = 3 */
