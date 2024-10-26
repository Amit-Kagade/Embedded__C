/*Take a number and character from user and print character that number of times using the while loop*/


#include<stdio.h>

int main(){

int num;
char ch;

printf("Enter a number : ");
scanf("%d",&num);

printf("Enter a character :");
getchar(ch);
scanf("%c",&ch);

if (num<0){

printf("Please enter positive number\n");
return 1;
}

int count=0;

while(count<num){

printf("%c\t",ch);
count++;

}printf("\n");

return 0;

}

