/*Write aC program t initialize global and local variable with different values. 
  Print the value to demostrate how initialization works for each scope 
  Author Name : Amit Santosh Kagade*/

  #include<stdio.h>

  int var = 10;   //Globally declared

  int main (){

    printf ("Global variable (var): %d\n",var);

    int var = 20;   //Locally declared

    printf ("Local Variable (var): %d\n",var);

    return 0;

  }