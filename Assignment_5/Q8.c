/*Write a C program to get a string from user through keyboard using getchar function

Author Name : Amit Santosh Kagade*/

#include<stdio.h>

#define max 100
int main(){
    
char str[max];
int index  = 0;
char ch;

printf ("Enter a string: ");

while((ch = getchar()) != '\n' && index < max - 1){
    str[index++] = ch;

}

str[index++] = '\0';

printf("Your entered : %s\n", str);

return 0;

}