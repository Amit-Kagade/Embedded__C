 /*Write a C program to read the contents of a file and disply it on the screen */

 #include<stdio.h>

int main(){

FILE *file;
char filename[100];
char ch;

printf("Enter the name of the file to open :");
scanf ("%s",filename);

file = fopen(filename, "r");

if (file == NULL){

    printf("ERROR: Could not open file%s\n",filename);
    return 1;
}

printf("\nContent of file :%s\n\n",filename);
while((ch= fgetc(file)) != EOF){
    putchar(ch);
}
fclose(file);
return 0;

}