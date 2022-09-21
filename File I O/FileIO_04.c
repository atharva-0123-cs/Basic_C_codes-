// File Writing
#include<stdio.h>
 int main(){
 	int num = 10;
 FILE *fptr;
 fptr = fopen("generated.txt", "w");
 fprintf(fptr, "Hi I'm Generated now.\n");
 fprintf(fptr, "The num is : %d", num);
 return 0;
 }

