/*Write a C progrma to input two numbers from users and add them. Use diff functions for diff functionalities

Author Name : Amit Santosh Kagade */

#include <stdio.h>

int num1,num2;                     //global variable

int input_number(){               // input no function
printf("Enter number 1 : ");
scanf("%d",&num1);
printf("Enter number 2 : ");
scanf("%d",&num2);
}

int add_number(int a, int b){     //add no function
return a+b;
}

int result(int sum){             //result function
printf ("Result of addding two no : %d\n",sum);
}


void main(){                     //main function
input_number();
int sum = add_number(num1,num2);
result(sum);
}

