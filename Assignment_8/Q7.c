/* Write a C program to count the number of characters, words, and lines in a file.*/

#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100], ch;
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;

    // Get the filename from the user
    printf("Enter the name of the file: ");
    scanf("%s", filename);

    // Open the file in read mode
    file = fopen(filename, "r");

    // Check if the file was successfully opened
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    // Read the file character by character
    while ((ch = fgetc(file)) != EOF) {
        characters++;  // Count every character

        // Count lines
        if (ch == '\n') {
            lines++;
        }

        // Count words
        if (isspace(ch)) {
            if (inWord) {
                words++;
                inWord = 0;
            }
        } else {
            inWord = 1;
        }
    }

    // If the last character is part of a word, increment the word count
    if (inWord) {
        words++;
    }

    // Close the file
    fclose(file);

    // Print the results
    printf("Number of characters: %d\n", characters);
    printf("Number of words: %d\n", words);
    printf("Number of lines: %d\n", lines);

    return 0;
}
