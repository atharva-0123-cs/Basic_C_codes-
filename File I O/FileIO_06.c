//EOF : End Of File 
#include<stdio.h>
 int main(){
 char c;
 FILE *ptr;
 ptr = fopen("generated.txt", "r");
 c = fgetc(ptr);
 while(c != EOF){
 	printf("%c", c);
 	c = fgetc(ptr);
 }
 fclose(ptr);
 return 0;
 }

