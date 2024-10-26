/*Write a C program to get a persons height and weight and calculate their BMI.

Author Name : Amit Santosh Kagade*/

#include<stdio.h>

int main(){

float height, weight, bmi;

printf("Enter hewight in meters : ");
scanf("%f",&height);

printf("Enter weight in kg : ");
scanf("%f",&weight);

bmi= weight / (height*height);

printf("Your BMI is : %.2f\n",bmi);


if(bmi<18.5){
printf("BMI category: Underweight\n");
}
else if(bmi>=18.5 && bmi<24.9){
printf("BMI category: Normal weight\n");
}
else if(bmi=25 && bmi<29.9){
printf("BMI category: Overweight\n");
}
else{
printf("BMI category: Underweight\n");
}

return 0;

}