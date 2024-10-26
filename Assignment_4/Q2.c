/*Write a C program to find the largest and smallest elementi narray of integers.
The size of the array and the element should be input by the user

Author Name : AMit Santosh Kagade*/

#include<stdio.h>

int main() {

int n,i;
printf ("Enter the size of the array: ");
scanf("%d",&n);

int arr[n];

printf ("Enter %d elements of the array: \n",n);
for(i=0; i<n; i++){
    scanf("%d",&arr[i]);
}
int largest = arr[0];
int smallest = arr[0];

for(i=1; i<n; i++){

    if(arr[i] > largest){
        largest = arr[i];
    }
    if(arr[i] < smallest){
        smallest = arr[i];
    }
}
printf("The largest  no: %d\n",largest);
printf("The smallest  no: %d\n",smallest);

return 0;

}