/*Wrie a C program to calculate the average of n integers stored in an array.
 The sizeof the array and the element should be input by the user
 
 Auhthor Nmae : Amit Santosh Kagade*/


#include<stdio.h>

int main() {

int n,i,sum=0;
printf ("Enter the size of the array: ");
scanf("%d",&n);

int arr[n];

printf ("Enter %d elements of the array: \n",n);
for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
sum += arr[i];
}

int average = sum/n;
printf ("Average of the total elements: %d\n",average);

return 0;

}