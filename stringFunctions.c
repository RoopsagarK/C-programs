#include<stdio.h>
#include<string.h>
void main(){
	char s1[50],s2[50];
	printf("enter the string1 and string2 : ");
	scanf(" %s%s",s1,s2);
	printf("length of string1 is : %d\n",strlen(s1));
	printf("length of string2 is : %d\n",strlen(s2));
	
	if(strcmp(s1,s2) == 0){
		printf("after comparession the strings are equal\n");
	}else{
		printf("after comparession strings are not equal\n");
	}
	
	printf("after concatenation of string1 and string2 the result is :  %s",strcat(s1,s2));
	
}
/*enter the string1 and string2 : Roop
sagar
length of string1 is : 4
length of string2 is : 5
after comparession strings are not equal
after concatenation of string1 and string2 the result is :  Roopsagar
[Program finished]*/
	