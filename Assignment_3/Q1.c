/*Write a C program to check maximum and minimum number.The numbers should be entered by user

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int num1,num2,max;

int main(){

printf ("Enter any two numbers : ");
scanf  ("%d %d",&num1,&num2);

if(num1>num2 && num1!=num2){

printf(" max : %d\n",num1);
printf(" min : %d\n",num2);

}else if(num2>num1 && num1!=num2){

printf(" max : %d\n",num2);
printf(" min : %d\n",num1);

}else {

    printf("both numbers are same\n");
}
return 0;
}