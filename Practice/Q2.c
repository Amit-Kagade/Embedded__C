/*Take a number and character from user print character that number of times the loop*/

#include <stdio.h>

void print(int num, char ch){

if(num<=0) { return; }
printf("%c\t",ch);
print(num-1,ch);;

}


int main(){

int num;
char ch;
printf("enter a number : ");
scanf("%d",&num);

printf("Enter a character : ");
getchar();
scanf("%c",&ch);

if(num<0){

    printf("Enter positive number !!!");
    return 1;
}
print(num,ch);

return 0;

}