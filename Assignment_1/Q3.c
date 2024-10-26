/*Q. Write a C program with a static local variable name counter which is count from 1 to 5
  Author Name : Amit Santosh Kagade*/


#include<stdio.h>


void counter (){

static int count = 0;
count++;
printf("Count : %d\n",count);

}


int main(){

    counter();
    counter();
    counter();
    counter();
    counter();

    return 0;
}