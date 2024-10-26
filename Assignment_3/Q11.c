/*Write a menu drive program to perform basic airthmetic operations.
Menu option - 0to Exit, 1to Add, 2 to subtract, 3 to multiply, 4 to Divide.
Depending upon the choice entered by user the arithmetuc operations should be performed and continue till user user wants*/

#include<stdio.h>

int main(){

int choice;
float num1, num2, result;

do {

    printf("\n*****MENU*****\n");
    printf("0. Exit\n");
    printf("1. Add\n");
    printf("2. Sub\n");
    printf("3. Mul\n");
    printf("4. Div\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);
     

    switch(choice){

    case 0:
    printf("Exiting the program :");
    break;

    case 1:
    printf("Enter two num : ");
    scanf("%f %f",&num1,&num2);
    result = num1+num2;
    printf("Result :%.2f\n",result);
    break;

    case 2:
    printf("Enter two num : ");
    scanf("%f %f",&num1,&num2);
    result = num1-num2;
    printf("Result : %.2f\n",result);
    break;

    case 3:
    printf("Enter two num : ");
    scanf("%f %f",num1,&num2);
    result = num1*num2;
    printf("Result : %.2f\n",result);
    break;

    case 4:
    printf("Enter two num : ");
    scanf("%f %f",&num1,&num2);
    if(num2!=0){
    result = num1/num2;
    printf("Result :%.2f\n",result);
    }else { printf("Error!!!");}
    break;

    default:
    printf("Invalid Choice!!!");
    }

}while(choice != 0);
 return 0;

}