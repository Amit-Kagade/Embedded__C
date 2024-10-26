#include<stdio.h>
#include<string.h>

union Data {
    int i;
    float f;
    char str[20];
};

int main(){

union Data data;

data.i = 10;
printf("data.i : %d\n", data.i);

data.f = 12.55;
printf("data.f : %.2f\n", data.f);

strcpy(data.str," Hello Amit");
printf("data.str : %s\n",data.str);

printf("data.i(after str) : %d\n",data.i);

printf("data.f(after str) : %.2f\n",data.f);

printf("data.str(after str): %s\n",data.str);
return 0;

}