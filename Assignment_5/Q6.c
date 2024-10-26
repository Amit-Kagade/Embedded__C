/*Write a C program to swap two integer variables using pointer and function

Author Name : Amit Santosh Kagade*/

#include<stdio.h>

void swap(int *a, int *b){

    int temp = *a;
    *a = *b;
    *b= temp;
}

int main(){

    int a,b;

    printf ("Enter first no : ");
    scanf  ("%d",&a);

    printf ("Enter second no : ");
    scanf  ("%d",&b);

    printf ("Before Swapping : %d %d\n",a,b);

    swap(&a,&b);

    printf ("After swapping : %d %d\n",a,b);

    return 0;
}