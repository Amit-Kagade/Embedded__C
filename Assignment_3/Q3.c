/* Take a month number from user and print how many days are there in that month by using switch case 

Author Name : Amit Santosh Kagade */

#include <stdio.h> 

int month;

int main(){

printf ("Enter month number : ");
scanf ("%d",&month);

switch (month){

case 1: case 3: case 5: case 7: case 8: case 10: case 12:
printf ("There are 31 days in that month\n");
break;

case 4: case 6: case 9: case 11:
printf ("There are 30 days in that month\n");
break;

case 2:
printf ("There are 29 days in that month\n");
break;

default:
printf("Error : Enter a valid number (1-12)\n");

}

return 0;

}