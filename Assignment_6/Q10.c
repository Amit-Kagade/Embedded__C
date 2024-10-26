/*Write a C program that define an enum operation with value ADD, SUB, MUL and DIV.
Write a function perform operation that take two integers and an operation enum value, perform the corrosponding  operation and
retrn the result. Demonstrate this function in your main function. Take two integer value from users.*/


#include<stdio.h>

enum operation{ Add,Sub,Mul,Div};

float perform (float a, float b,enum operation op){

    switch(op){

        case Add:
        return a+b;
        break;

        case Sub:
        return a-b;
        break;

        case Mul:
        return a*b;
        break;

        case Div:
        if(b!=0){
        
        return a/b;
        break;
        }else {printf("Enter greater than zero number ");}

        default :
        printf ("Enter valid Operation !!!");

    }
}
int main(){

float num1, num2, choice;
enum operation op;

printf ("Enter two integers :");
scanf("%f %f",&num1,&num2);

printf ("\nSelect an operation\n");
printf (" \t0: ADD\n \t1: SUB\n \t2: MUL\n \t3: DIV\n");
printf ("Your choice(0 1 2 3)\t:");
scanf  ("%f",&choice);

if(choice<0 || choice>3){
    printf("Invalid choice\n");
    return 1;
}

op = choice;

if(num2==0 && choice==3){
    printf("We cant devide any num by zero\n");
    return 1;
}
float result = perform(num1, num2, op);
printf ("Result : %.2f\n",result);
return 0;

}