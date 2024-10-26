/*Write a C program to input data like: num1, num2 and airthmetic operation from user and perform the task*/


#include<stdio.h>

int main(){

float num1,num2,result;
char operation;

printf("Enter the 1st num : ");
scanf ("%f",&num1);

printf("Enter the 2nd num : ");
scanf ("%f",&num2);

printf("Enter an airthmetic operation (+, -, *, /) : ");
scanf (" %c",&operation);

switch(operation){

    case '+':
    result = num1 + num2;
    printf("Addition : %.2f\n",result);
    break;

    case '-':
    result = num1 - num2;
    printf("Subtaction : %.2f\n",result);
    break;

    case '*':
    result = num1 * num2;
    printf("Multiplication : %.2f\n",result);
    break;

    case '/':
    if(num2!=0){
    result = num1 / num2;
    printf("Division : %.2f\n",result);

    }else { printf ("Error!!!");}
    break;

    default :
    printf("Error!!! Invalid operation entered !!!\n");
    break;

}
}