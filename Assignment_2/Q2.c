/*Write a C program for calculator with basic Operations.
  Author Name : Amit Santosh Kagade*/

  #include <stdio.h>

  char operator;
  double a,b,c;

  int main (){

  printf("Enter any operator : (+,-,*,/)");
  scanf("%c",&operator);
  printf("Enter any two numbers : ");
  scanf("%lf%lf",&a,&b);

  switch (operator){

    case '+':
    c=a+b;
    printf("Sum = %lf\n",c);
    break;

   case '-':
   c=a-b;
   printf("Sub = %lf\n",c);
   break;

   case '*':
   c=a*b;
   printf("Mul = %lf",c);
   break;

   case '/':
   if(b!=0){

        c=a/b;
        printf("Div = %lf",c);

   } else{
        printf ("Error :Any Number cant be divide by zero");
   } break;

   default :
   printf ("Please Enter valid Operator (+,-*,/)\n");
   break;
    
  }


  }