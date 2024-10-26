/*Write a C code to check if bit2 and bit3 are both set. Print whether they are both set or not.*/

#include <stdio.h>

int main() {
    
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if ((number & 0x0C) == 0x0C) {
        printf("Both bit 2 and bit 3 are set.\n");
    } else {
        printf("Both bit 2 and bit 3 are not set.\n");
    }

    return 0;
}
