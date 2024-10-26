/*Write A C program to show bit masking and modify specific bits within a variable. 
Demonstrates how to use bitwise operators with masks*/

#include <stdio.h>

// Define bit positions for demonstration
#define BIT0 0  
#define BIT1 1  
#define BIT2 2 
#define BIT3 3  

// Macros for bitwise operations
#define SET_BITS(reg, mask)    ((reg) |= (mask))   
#define CLEAR_BITS(reg, mask)  ((reg) &= ~(mask))   
#define TOGGLE_BITS(reg, mask) ((reg) ^= (mask))  
#define CHECK_BITS(reg, mask)  ((reg) & (mask))   

int main() {
    unsigned int var = 0x0F; //  00001111 
    unsigned int mask;

   
    printf("Initial value of var: 0x%02X\n", var);

   
    mask = (1 << BIT1) | (1 << BIT2); 

   
    SET_BITS(var, mask);
    printf("After setting BIT1 and BIT2: 0x%02X\n", var);

    
    CLEAR_BITS(var, mask);
    printf("After clearing BIT1 and BIT2: 0x%02X\n", var);

    
    TOGGLE_BITS(var, mask);
    printf("After toggling BIT1 and BIT2: 0x%02X\n", var);

  
    if (CHECK_BITS(var, mask)) {
        printf("Bits BIT1 and BIT2 are set.\n");
    } else {
        printf("Bits BIT1 and BIT2 are not set.\n");
    }

    return 0;
}
