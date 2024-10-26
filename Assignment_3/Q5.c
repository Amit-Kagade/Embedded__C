/*Write a C program to compute the factorial of a given positive integer using a for loop.

Author Name : Amit Santosh Kagade*/

#include <stdio.h>

int n,mul=1;

int main(){

printf ("Enter a positive number : ");
scanf ("%d",&n);

for(int i=1; i<=n; i++){

mul *= i;

}printf ("Factorial of 1st +ve Numbers : %d\n",mul);

return 0;

}