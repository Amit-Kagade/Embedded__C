/*Q. Write a C program that demonstrate the concept of variable scope by using local and global variable.
     Show how changes to a global variable affect the output in diff functions.
     Author Name : Amit Santosh Kagade*/

     #include <stdio.h>

     int a = 10;  //Global Variable


     void local1(){

     int b = 20; //Local Variable 1
     printf ("local Variable 1 : %d\n",b);
     
     }


     void local2(){

     int c = 30; //Local Variable 2
     printf ("local Variable 2 : %d\n",c);

     }


     void main(){
     
     printf ("Global Variable  : %d\n",a);
     printf ("Local Variable 1 : %d\n",b); 
     local2();  
        
     }