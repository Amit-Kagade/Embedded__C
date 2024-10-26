/*Write a C program to input a singe character from user also printing it on screen. (use getchar and putchar function

Author Name : Amit Santosh Kagade)*/

#include<stdio.h>

int main(){

char ch;

printf ("Enter a single character: ");

ch = getchar();

printf("Your entered : ");
putchar(ch);
printf ("\n");

return 0;

}