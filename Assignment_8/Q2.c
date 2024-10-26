/*Write a C program to the maximum number among 2 using macro-MAX*/

#include<stdio.h>

#define MAX(a,b) ((a) > (b)? (a) : (b))

int main(){

    int num1,num2,max;

    printf("Enter number 1 : ");
    scanf ("%d",&num1);

    printf("Enter number 2 : ");
    scanf ("%d",&num2);

    max = MAX(num1,num2);

    printf("Max number among %d and %d is : %d\n",num1,num2,max);


    return 0;
}

