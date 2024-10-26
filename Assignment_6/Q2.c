/*Define a structure Person with the members name (string of 50 characters) and age (integer).
 Write a program to initialize a Person structure with your own details and then print the name and age of the person.
 
Author Name : Amit Santosh Kagade*/

#include<stdio.h>
#include<string.h>

struct Person{

char name[50];
int age;

};

int main(){

struct Person person1;

strcpy(person1.name,"Amit Kagade"); person1.age = 23;

printf("Name : %s\n",person1.name);
printf("Age :  %d\n",person1.age);

return 0;

}