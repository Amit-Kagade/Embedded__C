/*Write a C program that print the Fibonacci sequence up to n terms using a while loop.
The value of n should be provided by the user*/

#include <stdio.h>

int main(){

int n, t1= 0, t2= 1, i= 1, next_term;

printf ("Enter the number of terms : ");
scanf ("%d",&n);


while(i <= n){

printf("%d ",t1);

next_term = t1 + t2;
t1 = t2;
t2 = next_term;
i++;

}printf("\n");

return 0;

}