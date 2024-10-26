/*Take number and character form user and print character that number of times using while loop

Author Name : Amit Santosh Kagade*/


#include<stdio.h>

int main(){

    char ch;
    int num,i=0;

printf("Enter a character : ");
scanf("%c",&ch);

printf("Enter a number : ");
scanf("%d",&num);

while(i<num){

printf("%c\t",ch);
i++;

}
return 0;
}