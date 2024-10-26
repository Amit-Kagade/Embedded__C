/*Write a C program that reerse a given integer using a do-while loop*/

#include <stdio.h>

int main (){

int num, remainder, reverse = 0;

printf("Enter a num : ");
scanf ("%d",&num);

do {

remainder = num%10;
printf ("remainder : %d\n",remainder);

reverse = reverse * 10 + remainder ;
printf ("reverse : %d\n",reverse);

num /= 10;
printf ("reverse : %d\n",num);

}while (num != 0);

printf("Reversed number : %d\n",reverse);

return 0;

}