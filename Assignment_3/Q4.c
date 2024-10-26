/*Write a C program that calculate the sum of the first n positive integers using a for loop.
The value of n should be input by the user

Author Name Amit Santosh Kagade*/

#include <stdio.h>

int n,sum=0;

int main(){

printf ("Enter a positive number : ");
scanf ("%d",&n);

for(int i=1; i<=n; i++){

sum += i;

}printf ("Sum of 1st +ve Numbers : %d\n",sum);

return 0;

}