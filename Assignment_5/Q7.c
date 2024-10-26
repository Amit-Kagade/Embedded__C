/*Write a C program to read a string from the user, use pointers to reverse the string in place
 and print the original and reverse string

Author Name : Amit Santosh Kagade*/


#include<stdio.h>
#include<string.h>

void reverse(char *str){

    char *start = str;
    char *end = str + strlen(str) - 1;
    char temp;

    while (start<end){

        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main(){

char str[100];

printf("Enter a string :");
fgets(str,sizeof(str),stdin);

str[strcspn(str, "\n")] = '\0';

printf("orignal strign : %s\n", str);

reverse(str);

printf("Reverse String : %s\n", str);

return 0;

}