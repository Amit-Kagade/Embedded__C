/*Write a C program that caculates the maximum of three numbers using the conditional (ternary) operator.
The program should handle cases where the number are equal

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int a,b,c,max;

int main(){

printf ("Enter three numbers : ");
scanf ("%d%d%d",&a,&b,&c);


max= (a>=b)?((a>=c)?a:c):((b>=c)?b:c);


if(a==b && b==c){

printf("All the numbers are equal : %d %d %d\n",a,b,c);

}else if(max==a && max==b){

printf("Maximum number are equal : %d %d\n",a,b);

}else if(max==a && max==c){

printf("Maximum number are equal : %d %d\n",a,c);

}else if(max==b && max==c){

printf("Maximum number are equal : %d %d\n",b,c);

}else{

printf("Max value : %d\n",max);

}

return 0;

}