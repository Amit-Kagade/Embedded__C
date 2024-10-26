/*Write a C program to show the use of gets and puts function by taking a string from user end

Auhtor Name : Amit Santosh Kagade*/

#include<stdio.h>


int main(){

char str[100];

printf("Enter a string : ");

fgets(str,sizeof(str),stdin);

printf("Your entered : ");

puts(str);

return 0;

}