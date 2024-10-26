/*Write a function that takes a Color and returns a string representing the color. Print the color in 
main based on the favoriteColor value*/

#include <stdio.h>

// Define an enum for colors
typedef enum {
    RED,
    GREEN,
    BLUE,
    YELLOW,
    UNKNOWN
} Color;

// Function to return the color as a string
const char* getColorName(Color color) {
    switch (color) {
        case RED:
            return "Red";
        case GREEN:
            return "Green";
        case BLUE:
            return "Blue";
        case YELLOW:
            return "Yellow";
        default:
            return "Unknown Color";
    }
}

int main() {
    // Example favorite color
    Color favoriteColor = BLUE;

    // Print the favorite color
    printf("Your favorite color is: %s\n", getColorName(favoriteColor));

    return 0;
}
