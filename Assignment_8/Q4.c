/*Wrie a C program to create a file and write user input on it.*/

#include<stdio.h>

int main(){

    FILE *file;
    char filename[100];
    char input[1000];
    char ch;

    printf("Enter the file name to be created : ");
    scanf ("%s",filename);

    file = fopen(filename, "w");

    if(file == NULL){
        printf("ERROR: File could not created!!!\n");
        return 1;
    }

    printf("Enter text that could be written in the file : /n");
    getchar();
    fgets(input,sizeof(input),stdin);

    fputs(input,file);

    fclose(file);

    printf("data successfully stored !!! %s\n",filename);

    // below code for reading the data which stored on my created file
    
    file = fopen(filename, "r");

    if(file == NULL){
        printf("ERROR: File could not opened !!!\n");
        return 1;
    }

    printf("\nContent of file :%s\n\n",filename);

    while((ch= fgetc(file)) != EOF){
    putchar(ch);
    }
    fclose(file);

    return 0;
}