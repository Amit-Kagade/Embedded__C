/*Write a C program to print the multiplication table of a number uo to 10 using nested for loop.
The number shold be input by user*/

#include <stdio.h>

int main(){

int num;

printf ("Enter a num :");
scanf ("%d",&num);

for(int i=1; i<=10; i++){

    for(int j=1; j<=10; j++){

        printf("%d x %d = %d\n",num,j,num*j);

    }break;

    }return 0;

}