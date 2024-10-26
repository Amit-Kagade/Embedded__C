/*Write a C program to reverse th elements of an array.
 The size of the array and the elements should be provided by the user.

Author Name : Amit Santoash Kagade*/

#include <stdio.h>

int main(){

    int i,n;

    printf("Enter the size of the array : ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d element of the array :\n",n);
    for(i=0; i<n; i++){
    scanf("%d", &arr[i]);
    } 

    printf("Original array : ");
    for(i=0; i<n; i++){
    printf ("%d",arr[i]);
    }
    printf("\n");

    for(i=0; i<n/2; i++){
        int temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }
    printf ("Reversed array: ");
    for(i=0; i<n; i++){
        printf("%d",arr[i]);
    }
    printf("\n");

    return 0;
}