/*Write a C program to perform bitwise left and right shift operations.*/

#include <stdio.h>

int main() {
    
    unsigned int num;  
    int shiftAmount;   

    printf("Enter an unsigned integer: ");
    scanf("%u", &num);

    printf("Enter the number of positions to shift: ");
    scanf("%d", &shiftAmount);

    unsigned int leftShift = num << shiftAmount;

    unsigned int rightShift = num >> shiftAmount;

    printf("\nOriginal number: %u (0x%X)\n", num, num);
    printf("Left shift by %d positions: %u (0x%X)\n", shiftAmount, leftShift, leftShift);
    printf("Right shift by %d positions: %u (0x%X)\n", shiftAmount, rightShift, rightShift);

    return 0;
}
