/*Write a C program to perform concatenation on 2strings. Use pointer to string for strcat() function.

Author Name : Amit Santosh Kagade*/


#include <stdio.h>


void myStrcat(char *destination, const char *source) {
   
    while (*destination != '\0') {
        destination++;
    }

   
    while (*source != '\0') {
        *destination = *source;
        destination++;
        source++;
    }

    *destination = '\0';
}

int main() {
    char str1[100], str2[50];

    
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);
    
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Remove trailing newline from fgets
    str1[strcspn(str1, "\n")] = 0;
    str2[strcspn(str2, "\n")] = 0;

    myStrcat(str1, str2);

    printf("Concatenated string: %s\n", str1);

    return 0;
}



/*
#include<stdio.h>
#include<string.h>

int main(){

    char str1[100], str2[50];

    printf("Enter the first string : ");
    fgets(str1, sizeof(str1), stdin);

    str1 [strcspn(str1, "\n")] = '\0';

    printf("Enter the second string : ");
    fgets(str2, sizeof(str2), stdin);

    str2 [strcspn(str2, "\n")] = '\0';

    strcat(str1, str2);

    printf("Concentrated string : %s\n", str1);

    return 0;
}*/