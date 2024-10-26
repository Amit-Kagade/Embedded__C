/*Write a C program to append text to an existing file*/

#include<stdio.h>

int main(){

FILE *file;
char filename[100];
char input[1000];

printf("Enter a filename in which you want to append txt : ");
scanf ("%s",filename);

file = fopen(filename, "a");

if(file == NULL){
    printf("ERROR: Could not open file !!!");
    return 1;
}

printf("Enter a txt you want to append :\n\n");
getchar();
fgets(input,sizeof(input),stdin);

fputs(input,file);

fclose(file);

printf("Your txt succesfully appended to file %s\n",filename);

return 0;

}