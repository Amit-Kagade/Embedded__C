/*Using fgets*/

#include<stdio.h>
#include<string.h>
#define max 100

int main(){

char str[max];

printf("Enter a string : ",max-1);
if (fgets(str,sizeof(str),stdin)!= NULL){
    size_t len= strlen(str);
    if(len>0 && str[len-1]== '\n'){

        str[len-1] = '\0';
        printf("your entered =%s\n",str);
    
    }
}return 0;

}