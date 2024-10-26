/*Take a nubmer and character from user and print character that number of times using recursion.

Author Name : Amit Santosh Kagade*/


#include<stdio.h>

void user(int n, char ch){

    if(n<=0){
         return ;
    }
    printf(" %c\t",ch);
    user(n-1,ch);
}

int main (){

int n;
char c;
printf ("ENter a character : ");
scanf ("%c",&c);

printf("Enter a number : ");
scanf ("%d",&n);

user(n,c);

return 0;

}

