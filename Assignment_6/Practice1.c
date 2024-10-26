#include<stdio.h>
#include<string.h>

struct Person {

    char name [50];
    int age;
    float height;
};

int main(){

struct Person person1;

strcpy(person1.name,"Amit"); person1.age = 23; person1.height = 6.3;

printf("Name : %s\n", person1.name);
printf("Age : %d\n",person1.age);
printf ("Height : %.1f\n",person1.height);

return 0;

}