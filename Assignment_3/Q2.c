/*Write a C program to fond out maximum numbers out of 3 numbers entered by user.

Author name : Amit Santosh Kagade*/

/*
#include <stdio.h>

int num1,num2,num3;

int main(){

printf ("Enter any three numbers : ");
scanf("%d%d%d",&num1,&num2,&num3);

if (num1>num2 && num1>num3){

printf("Max number is : %d\n",num1);

}else if (num2>num1 && num2>num3){

printf("Max number is : %d\n",num2);

}else{
    
printf("Max number is : %d\n",num3);

}
return 0;
}*/

#include <stdio.h>

int main() {
    int n, num, max_num, min_num;
    
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    // Take the first number as both max and min
    printf("Enter number 1: ");
    scanf("%d", &num);
    max_num = num;
    min_num = num;
    
    for (int i; i < n; i++) {
        printf("Enter number %d: ", i + 1);
        scanf("%d", &num);
        
        // Update max and min values using if-else statements
        if (num > max_num) {
            max_num = num;
        } else if (num < min_num) {
            min_num = num;
        }
    }
    
    printf("Maximum number is: %d\n", max_num);
    printf("Minimum number is: %d\n", min_num);
    
    return 0;
}
