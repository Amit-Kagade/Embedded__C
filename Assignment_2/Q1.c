/*Write a C program that demonstrate the different between pre-increment(++x) and post-increment(x++) operators. 
Print the values before and after each operation.
Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int main (){

int x = 10;

printf("Initial Value : %d\n",x);
printf("Value After Pre-increment (++x) : %d\n",++x);
printf("Value after pre-increment : %d\n",x);

printf("Initial Value : %d\n",x);
printf("Value After Post-increment (x++) : %d\n",x++);
printf("Value after post-increment : %d\n",x);


return 0;

}