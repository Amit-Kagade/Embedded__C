/*Write a C program that demonstrate the effects of type casting on airthametic operations. 
The program should perform division with both integer and floating-point types and show how the result differ

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

float a,b,y,z;

int main(){

printf("Initial value of a and b\n");
scanf("%f%f",&a,&b);

 y = a/b;

printf("Division of integer  :\t%f\n",y);

z = a / b;

printf("Division of (float)z=(float)a/b  : %f\n",z);

z = a/b;

printf("Division of (float)z=a/(float)b  : %f\n",z);

z = a/b;

printf("Division of both floating points : %f\n",z);

return 0;

}
