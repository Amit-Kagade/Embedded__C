/*Q. Write aC program with int, float, double, char data types and print the size of these datatypes
  Q. Write aC program to print the sizr (in byte) of disserent data types (int, float, double, char) using the "sizeof" operator.
  Author Name : Amit Santosh Kagade*/


#include<stdio.h>

int a=10;
float f=147.0;
char c= 'A';
double d=200.0;

int main(){

printf("The size of integer: %dbytes\n",sizeof(a));
printf("The size of float: %dbytes\n",sizeof(f));
printf("The size of character: %dfbytes\n",sizeof(c));
printf("The size of double: %dbytes\n",sizeof(d));

    return 0;
}