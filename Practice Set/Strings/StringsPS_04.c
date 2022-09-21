/* Write a progrm  to encrypt a string by adding 1 to the ASCII value of it's 
characters. */
#include<stdio.h>
 void encrypt(char *c){
 	char *ptr = c;
 	while(*ptr != '\0'){
 		*ptr = *ptr + 1;
 		 ptr++;
	 } // Note : use ASCII table, to how it works. 
 }
 int main(){
 char c[] = "Atahrva Aglawe";
 encrypt(c);
 printf("Encrypted string is : %s",c);
 return 0;}

