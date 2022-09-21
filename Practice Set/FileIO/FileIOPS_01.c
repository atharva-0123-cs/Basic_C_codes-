/* Write a program to grnerate multipliction table of a given table of a given 
number in text format. Make sure that the file is readable and well formatted. */
#include<stdio.h>
 int main(){
 int n,i=0;
 FILE *ptr;
 printf("Enter a number : ");
 scanf("%d",&n);
 ptr = fopen("FileIOPS_01.txt", "w");
 fprintf(ptr,"The given Table\n");
 while(i<10){
 	fprintf(ptr,"%d\n",(i+1)*n);
 	i++;
 }
 fclose(ptr);
 return 0;
 }

