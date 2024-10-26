/* Write a c program to take information from user using structure like roll number, name, standard 
and percentage. Print them as well

Author Name : Amit Santosh Kagade*/

#include<stdio.h>
#include<string.h>

struct user{

int roll;
char name[20];
int std;
float percent;

};

int main(){

struct user stu;

printf("Enter your roll No : ");
scanf("%d",&stu.roll);

printf("Enter your name : ");
while(getchar() !='\n');
fgets(stu.name, sizeof(stu.name), stdin);

printf("Enter your standard : ");
scanf("%d",&stu.std);

printf("Enter your percentage : ");
scanf("%f",&stu.percent);


printf ("Stu Name  :%s\n",stu.name);
printf ("Roll No   : %d\n",stu.roll);
printf ("Standard  : %d\n",stu.std);
printf("Percentage : %.2f\n",stu.percent);

return 0;

}