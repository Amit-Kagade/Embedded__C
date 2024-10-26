/*Write a c program that define an enum Operation with values ADD, SUB, MUL, DIV. 
Write a function perform an Operations that take two integers and an Operations enum value, 
performs the corrosponding operations and return the result. Demonstrate the function in your main function*/

#include<stdio.h>


int c,a=10,b=2;

enum Operation {Add,Sub,Mul,Div};

int print (enum Operation act){

switch(act){

        case Add:
        c= a+b;
        printf("Result : %d\n",c);
        break;

        case Sub:
        c= a-b;
        printf("Result : %d\n",c);
        break;

        case Mul:
        c= a*b;
        printf("Result : %d\n",c);
        break;

        case Div:
        if(b!=0){
        
        c= a/b;
        printf("Result : %d\n",c);
        }else {printf("Enter greater than zero number ");}
         break;

        default :
        printf ("Enter valid Operation !!!");

}

}
int main() {
//enum Operation act;
print(Add);
print(Sub);
print(Mul);
print(Div);

return 0;

}


