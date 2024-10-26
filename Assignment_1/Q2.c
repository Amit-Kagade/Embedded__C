/*Q. Initialize and assign integer values to 2 variables named x and y. Write a C code to swap their values wthout using any other variable. 
     Print the values before and after swapping.
     Author name : Amit Santosh Kagade*/

#include<stdio.h>

int x,y; 

int main (void){

printf("Enter First value:  ");
scanf("%d",&x);

printf("Enter Second Value:  ");
scanf("%d",&y);

//before swapping the values
printf("Original value of a: %d\n",x);
printf("Original value of b: %d\n",y);


//Logic to swap the values
x= x+y;
y= x-y;         
x= x-y;

//after swapping the values
printf("Swapped value of a: %d\n",x);
printf("Swapped value of b: %d\n",y);
return 0;

}