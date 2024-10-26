/*Write a C program that uses unary operators to increment and decrement a variable.
Initialize a variable, use both pre-increment and post increment operators, and print the results

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int main(){

int x;

printf("Enter a value :");
scanf("%d",&x);

++x;        //pre-increment the variable
printf("Pre-increment value (++x) : %d\n",x);

x++;        //post-increment the variable
printf("Post-increment value(x++) : %d\n",x);

printf("Result after pre-increment and then post increment : %d\n",x);

return 0;

}