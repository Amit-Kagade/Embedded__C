/*Write a C program that demonstrate the use of bitwise AND, OR, and XOR operators.
Initiliaze two integers and apply these operators to them, then print the result

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int a = 12;
int b = 13;

int main(){

printf("Initial value a and b :%d% d\n",a,b);

int c;

c = a&b;            
printf("AND Operator value of (10,20) : %d\n",c);

c = a|b;
printf("OR operator value of (10,20)  : %d\n",c);

c = a^b;
printf("XOR operator value of (10,20) : %d\n",c);

return 0;

}