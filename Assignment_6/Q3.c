/*Define a structure Circle with members radius (float) and colour (string of 20 char).
Write a function update Radius that take a pointer to a Circle structure and a new radius value,
updates the radius of the circle, and then print the updated radius

Author Name : Amit Santosh Kagade*/


#include<stdio.h>
#include<string.h>

struct Circle {

float radius;
char colour[20];

};

void update(struct Circle *c, float newradius){

c->radius = newradius;
printf("Upadated Radius : %.2f Cm\n",c->radius);

}

int main(){

struct Circle mycircle;

printf("Enter a radius (Cm) : ");
scanf("%f ",&mycircle.radius);

printf ("Enter a colour name : ");
while(getchar() !='\n');
fgets(mycircle.colour, sizeof(mycircle.colour), stdin);

printf("\nOriginal Radius :%f Cm\n",mycircle.radius);
printf("Original colour :%s",mycircle.colour);

float newradius;

printf("\nEnter new radius (Cm) : ");
scanf("%f ",&newradius);

update(&mycircle, newradius);

return 0 ;

}