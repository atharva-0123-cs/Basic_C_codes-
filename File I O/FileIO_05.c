// fgetc AND fputc
#include<stdio.h>
 int main(){
 FILE *ptr;
 // fgetc
 //ptr = fopen("Getc.txt", "r");
// char c = fgetc(ptr);
// printf("%c", fgetc(ptr));
// printf("%c", fgetc(ptr));
// printf("%c", fgetc(ptr));
// printf("%c", fgetc(ptr));
// printf("%c", fgetc(ptr));

// fputc
 ptr = fopen("Putc.txt", "w");

 fputc('c', ptr);
 fputc('d', ptr);
  fclose(ptr);
 return 0;
 }

