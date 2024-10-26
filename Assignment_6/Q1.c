/*Define a structure named Rectangle that includes two numbers: length and width, both of type float.
Write a function print Rectangle that takes a Rectangle structure as an argumrnt and print its length and width.

Author Name : Amit Santosh Kagade*/


#include<stdio.h>

struct Rectangle{

    float length,width;
};

void print(struct Rectangle rect){

printf("Length : %.2f\n",rect.length);
printf("Width : %.2f\n",rect.width);

}

int main(){

struct Rectangle mine;

printf("Enter the length of rectangle : ");
scanf("%f",&mine.length);

printf("Enter the width of rectangle : ");
scanf("%f",&mine.width);

print(mine);


return 0;

}