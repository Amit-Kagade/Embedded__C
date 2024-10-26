/*Write a C program to access elements of an array of 10 elements using pointer airthamatic

Author Name : Amit Santosh Kagade*/


#include<stdio.h>

int main(){

int arr[10];
int *ptr = arr;

printf ("Enter 10 digits : \n");

for(int i=0; i<10; i++){

    scanf("%d",(ptr + i));
}

for(int i=0; i<10; i++){

    printf("Element %d = %d\n",i, *(ptr +i));
}

return 0; 

}