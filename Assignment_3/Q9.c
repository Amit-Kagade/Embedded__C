/*Write a C program that prints a right - angled triangle pattern of stars (*) with n rows using neted for loop.
The number of roes n should be rovided by the user*/

#include <stdio.h>

int main(){

int i, j, num;

printf("Enter the num of Rows :");
scanf ("%d",&num);

for(i=1; i<=num; i++){

    for(j=1; j<=i; j++){

        printf("*");
    }
    printf("\n");
}
    return 0;
}