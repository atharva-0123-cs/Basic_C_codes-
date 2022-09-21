/* Write a progrm  to decrypt a string by adding 1 to the ASCII value of it's 
characters. */
#include<stdio.h>
 void encrypt(char *c){
 	char *ptr = c;
 	while(*ptr != '\0'){
 		*ptr = *ptr - 1;
 		 ptr++;
	 }
 }
 int main(){
 //char c[] = "dpnf!up!uijt!sppn"; // just another expmple.
   char c[] = "Buibswb"; // This will print Atharva 
   // Note : use ASCII table, to how it works. 
 encrypt(c);
 printf("Decrypted string is : %s",c);
 return 0;}

