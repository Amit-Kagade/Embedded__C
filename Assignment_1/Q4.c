/*Q. Write a C program to print a table of number  entered by User
  Author Name : Amit Santosh Kagade*/

#include<stdio.h>

int i,val;

int main(){

printf("Enter a value : ");
scanf("%d",&val);
printf("Table of : %d\n",val);

 for (i=1; i<=10; i++){

    //val=val+1;
    printf("%d*%d= %d\n",i,val,val*i);

 }

return 0;

}