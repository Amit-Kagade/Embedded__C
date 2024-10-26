/*Write a C program that initializes a variable x to 10. 
Use compound assignment operators to increment x by 5, decrement by 2, multiple x by 3, and divide by 4.
Print the final value of x.

Author Name : Amit Santosh Kagade*/


#include<stdio.h>

int x = 10;

int main(){
       
x += 5;     //increment x by 5
x -= 2;     //decrement x by 2
x *= 3;     //multiply x by 3
x /= 4;     //divide x by 4

printf ("%d\n",x);

return 0;

}