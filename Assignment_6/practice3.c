#include<stdio.h>

int main(){

unsigned int a = 0xF0F0;
unsigned int b = 0x0F0F;

unsigned int result = a&b;
printf ("Result (a&b) : 0x%X\n",result);

result = a|b;
printf ("Result (a|b) : 0x%X\n",result);

result = a^b;
printf ("Result (a^b) : 0x%X\n",result);

//result = a~b;
//printf ("Result (a~b) : 0x%X\n",result);

result = a<<b;
printf ("Result (a<<b) : 0x%X\n",result);

result = a>>b;
printf ("Result (a>>b) : 0x%X\n",result);

result = ~(a>>b);
printf ("Result (a>>b) : 0x%X\n",result);

unsigned char flag = 0b10101010;

flag |= (1<<2);     //
printf("flag : 0x%x\n", flag);

flag &=~ (1<<4);
printf("flag : 0x%x\n", flag);

flag ^= (1<<6);
printf("flag : 0x%x\n", flag);

return 0;

}