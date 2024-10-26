/*Write a C program to print the temperature and pressure of a heat chember on 
the given console one by one with efficient memory usage through unions.

Author Name : Amit Santosh Kagade*/

#include<stdio.h>

union data {

float temp;
float pressure;

};

int main(){

union data heat;


    printf("Enter temp (in degree celsius): ");
    scanf("%f",&heat.temp);

    printf("Enter pressure :");
    scanf("%f",&heat.pressure);

    printf("Temperature : %.2fC\n",heat.temp);
    printf("Pressure : %.2f\n",heat.pressure);

return 0;

}