/*Define an enum Shapetype with values CIRCLE, RECTANGLE, SQUARE and TRIANGLE. Write a C program that uses a switch statement 
to print a descripion for each shape type, for example, "CIRCLE A round shape", RECTANGLE: A shape with 4 right angles".*/


#include <stdio.h>

enum shapetype{CIRCLE, RECTANGLE, SQUARE, TRIANGLE};

void print (enum shapetype shapes){

switch(shapes){

    case CIRCLE:
    printf("\nCircle is a round shape !!");
    break;

    case RECTANGLE:
    printf("\nRectangle have 4 right angles !!");
    break;

    case SQUARE:
    printf("\nSquare have 4 same sides !!");
    break;

    case TRIANGLE:
    printf("\nTriangle have three sides !!");
    break;

    default :
    printf("\nPlease enter valid shape !!");
    break;
}

}

int main (){

print(CIRCLE);
print(RECTANGLE);
print(SQUARE);
print(TRIANGLE);

return 0;

}