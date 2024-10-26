/*Define a union named Vehicle that can store eithe the number of wheels(int), the engine capacity(float), or the vehicle type(char[20]).
Write a program to demonstrate how to store and print all three types of data.*/


#include<stdio.h>

union vehicle{

int wheels;
float engine;
char type[20];

};
int main(){

union vehicle v;

printf("The number of wheels : ");
scanf("%d",&v.wheels);
printf("The number of wheels : %d\n",v.wheels);

printf("\nThe engine capacity : ");
scanf("%f",&v.engine);
printf("The engine capacity  : %.2f\n",v.engine);

while(getchar() !='\n');
printf("\nEnter a vechicle type :");
fgets(v.type,sizeof(v.type),stdin);
printf("Enter vechicle type  : %s\n",v.type);


printf("\nThe number of wheels (1st entry ): %d\n",v.wheels);
printf("The engine capacity (2nd entry ): %.2f\n",v.engine);
printf("Enter vechicle type (last entry ): %s\n",v.type);
 
}