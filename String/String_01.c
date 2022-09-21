#include<stdio.h>
 int main(){
 	char str[] = "Atharva\n";
 	printf("%s", str);
 	// OR
 	/*char *ptr = str;
 	while(*ptr != '\0'){
 		printf("%c", *ptr);
 		ptr++;
	 }*/
	 // Geting input from user
	 char str1[10];
	 printf("Enter your name : ");
	 scanf("%s",str1);
	 printf("%s\n",str1);
	 // for more than one word. Ex- Atharva Aglawe is cool.
	 
	 fflush(stdin);
	 char s[40];
	  printf("Enter your name : ");
	  gets(s); // For reading multiple strings
	   fflush(stdin); // if confuse the remove it and run prorgam. you wii notice why we use it.
	  puts(s); // OR printf("%s\n",str2);
	  
	  // note
	  char *ptr = "Atharva";
	  ptr = "Aryash"; // this is Valid
	  
	 // char ptr[] = "Atharva";
	// ptr = "Arysah"; this is Invalid
 	return 0;
 }
