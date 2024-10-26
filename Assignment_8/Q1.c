/*Write a C program to define a macro "area" to calculate area of a circle after providing radius by user

Author Name : Amit Santosh Kagade*/

#include<stdio.h>

#define PI 3.14159
#define AREA(radius) (PI * (radius) * (radius))

int main (){

float radius,area;

printf("Enter radius of circle : ");
scanf ("%f",&radius);

area = AREA(radius);

printf("Area of circle with radius %.2f is : %.2f\n",radius,area);

return 0;

}