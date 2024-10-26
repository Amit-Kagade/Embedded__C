/*Write a C program to calculate power of given base and index (power = base^index)

Author Name : Amit Santosh Kagade*/


#include <stdio.h>

int power(int base, int index){

    if(index == 0){
        return 1;
    }
    
    return base*power(base, index - 1);
}

int main(){

    int base, index;

    printf("Enter base :");
    scanf("%d",&base);

    printf("Enter index :");
    scanf("%d", &index);

    if(index != 0){
    int result = power(base, index);
    printf("result = %d\n",result);
    }else{
    printf("result = 1\n");
    }

    return 0 ;

}