/* Write a program to modify a file containg an ineger to double it's value. */
#include<stdio.h>
 int main(){
 int num;
 FILE *ptr;
 ptr = fopen("FileIOPS_04.txt","r");
 
 fscanf(ptr, "%d", &num);
 //int m = 2*num;
 ptr = fopen("FileIOPS_04.txt","w");
 fprintf(ptr, "The Modify value is : %d",2*num);
 printf("Value Doubled");
 fclose(ptr);
 return 0;
 }

