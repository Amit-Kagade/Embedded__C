/*Write a C program to swap two integers variables uaing functions

Author Name : Amit Satosh Kagade */


#include<stdio.h>

int swap(int a, int b){

    int temp;
    temp = a;
    a = b;
    b= temp;
   printf ("After swapping : %d %d\n",a,b);
}

int main(){

    int a,b;

    printf ("Enter first no : ");
    scanf  ("%d",&a);

    printf ("Enter second no : ");
    scanf  ("%d",&b);

    printf ("Before Swapping : %d %d\n",a,b);

    swap(a,b);
    
    return 0;

}