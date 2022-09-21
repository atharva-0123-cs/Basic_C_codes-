/* Write a program to read a text file 'charcter by charcter' and write it's
content in sepreate file.*/
#include<stdio.h>
 int main(){
 char c;	
 FILE *ptr1, *ptr2;
 ptr1 = fopen("FileIOPS_02_read_file.txt", "r");
 ptr2 = fopen("FileIOPS_02_write_file.txt", "w");
 c = fgetc(ptr1);
 while(c != EOF){
 	fputc(c, ptr2);
 	c = fgetc(ptr1);
 }
 printf("Program RUN");
fclose(ptr1);
fclose(ptr2);
 return 0;
 }

