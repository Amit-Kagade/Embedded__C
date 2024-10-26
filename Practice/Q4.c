/*Write a C program to get a string from user through keyboard using getchar() function*/


#include<stdio.h>

int main(){

char str[100];
int index = 0;
char ch;

printf("Enter a String : ");

while((ch = getchar())!='\n' && index<=99){

    str[index++]=ch;
}

str[index]='\0';
printf("Your String : %s\n",str);

return 0;
}