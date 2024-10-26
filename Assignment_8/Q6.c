/*Write a C program t ocopy the contents of one file to another*/

#include<stdio.h>

int main(){

FILE *sourcefile,*targetfile;
char sourcefilename[100],targetfilename[100];
char ch;

printf("Enter the source file name :");
scanf ("%s",sourcefilename);

sourcefile = fopen(sourcefilename,"r");

if(sourcefile == NULL){
    printf("ERROR: Could not open source file !!!");
    return 1;
}

printf("Enter the target file name :");
scanf ("%s",targetfilename);

targetfile= fopen(targetfilename, "w");

if(targetfile == NULL){
    printf("ERROR: Could not open target file");
    fclose(sourcefile);
    return 1;
}

while((ch = fgetc(sourcefile)) != EOF){
    fputc(ch, targetfile);
}

fclose(sourcefile);
fclose(targetfile);

printf("File copied successfully form %s to %s\n",sourcefilename,targetfilename);

return 0;


}