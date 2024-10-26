/* Write C program to merge the contents of multiple text files into a single file*/


#include <stdio.h>

int main() {
    FILE *sourceFile, *targetFile;
    char sourceFilename[100], targetFilename[100];
    char ch;
    int n, i;

    // Get the name of the target file (where contents will be merged)
    printf("Enter the name of the target file: ");
    scanf("%s", targetFilename);

    // Open the target file in append mode ("a") to add content to it without overwriting
    targetFile = fopen(targetFilename, "a");

    if (targetFile == NULL) {
        printf("Error: Could not create file %s\n", targetFilename);
        return 1;
    }

    // Get the number of files to merge
    printf("Enter the number of files to merge: ");
    scanf("%d", &n);

    // Loop through each file and append its contents to the target file
    for (i = 0; i < n; i++) {
        printf("Enter the name of source file %d: ", i + 1);
        scanf("%s", sourceFilename);

        // Open the source file in read mode ("r")
        sourceFile = fopen(sourceFilename, "r");

        if (sourceFile == NULL) {
            printf("Error: Could not open file %s\n", sourceFilename);
            fclose(targetFile);
            return 1;
        }

        // Copy the contents of the source file to the target file
        while ((ch = fgetc(sourceFile)) != EOF) {
            fputc(ch, targetFile);
        }

        // Close the source file after copying its contents
        fclose(sourceFile);

        // Add a newline to separate contents from different files (optional)
        fputc('\n', targetFile);
    }

    // Close the target file
    fclose(targetFile);

    printf("Files successfully merged into %s\n", targetFilename);

    return 0;
}
