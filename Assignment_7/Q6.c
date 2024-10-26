/*Define a Bit-Field Structure with fields for low, mid, and high. Set Values for these fields. 
Print Values of low, mid, and high. Combine Fields into a single unsigned int and print its 
hexadecimal representation*/

#include <stdio.h>

struct BitField {
    unsigned int low : 4;   //(4 bits)
    unsigned int mid : 4;   //(4 bits)
    unsigned int high : 4;  //(4 bits)
};

int main() {
   
    struct BitField bf;

    bf.low = 0x3;   //  0011 
    bf.mid = 0xA;   //  1010 
    bf.high = 0x7;  //  0111 

    printf("Low: %X\n", bf.low);    
    printf("Mid: %X\n", bf.mid);    
    printf("High: %X\n", bf.high); 

    unsigned int combined = (bf.high << 8) | (bf.mid << 4) | bf.low;

    printf("Combined Value: 0x%X\n", combined);

    return 0;
}
