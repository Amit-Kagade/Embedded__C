/*Write a C program to calculate the power of given base and index*/


#include<stdio.h>

int power (int base, int index){

int result =1;

while(index>0){

result *= base;
index--;

}return result;

}

int main (){

int base,index,result;

printf ("Enter base : ");
scanf("%d",&base);

printf("Enter index : ");
scanf("%d",&index);

if (index<0){ printf("Enter postive index number !!!"); }

result = power(base,index);

printf("Result : %d\n",result);

return 0;

}