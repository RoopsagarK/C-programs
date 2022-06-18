#include<stdio.h>
int main(){
    float a,b;
    printf("enter any two values : ");
    scanf(" %f %f",&a,&b);

    char op;
    printf("enter the operator : ");
    scanf(" %c",&op);

    switch(op){
        case('+'):{
            printf("%.2f",a+b);
            break;
        }
        case('-'):{
            printf("%.2f",a-b);
            break;
        }
        case('*'):{
            printf("%.2f",a*b);
            break;
        }
        case('/'):{
            printf("%.2f",a/b);
            break;
        }
        default:{
            printf("enter valid operator.......!");
            break;
        }
    }

}