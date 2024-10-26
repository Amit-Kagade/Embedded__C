/*Write a C program that dempnstrate the order of evvaluation in expressions with operators. 
Use parenthese to show how operator precedence affects the result.

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int a = 10;
int b = 20;
int c = 30;

int main(){

printf("Initial values of a,b,c : %d %d %d\n",a,b,c);

int y = a+b*c;

printf("Result without parenthese a+b*c : %d\n",y);

y = (a+b)*c;

printf("Result with parenthese (a+b)*c  : %d\n",y);

return 0;

}