#include<stdio.h>

void main(){
	char s1[50],s2[50];
	printf("enter the string1 and string2 : ");
	scanf(" %s%s",s1,s2);
	
	//string length

int length1=0,length2 = 0;

	for(int i=0; s1[i]!='\0'  ; i++ ){
	length1++;
}
	for(int i=0; s2[i]!='\0'  ; i++ ){
	length2++;
}

printf("length of s1 without using libfunc : %d\n",length1);

printf("length of s2 without using libfunc : %d\n",length2);


//string compare
int length=0;
	for(int i=0; s1[i] != '\0' && s2[i] != '\0' ; i++){
		if(s1[i] == s2[i]){
			length++;
		}
	}
	
	if(length1 == length){
			printf("strings are equal\n");
	}else {
			printf("strings are not equal\nl");
	}

//string concatenate
int i,j;
i=length1;
for( j=0; s2[j] != '\0'; i++,j++){
	s1[i] = s2[j];
}
s1[i] = '\0';
printf("strings after concatenation %s",s1);
}
			
/*enter the string1 and string2 : roop
sagar
length of s1 without using libfunc : 4
length of s2 without using libfunc : 5
strings are not equal
lstrings after concatenation roopsagar
[Program finished]/	
			
