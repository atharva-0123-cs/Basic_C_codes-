/* Write a program to check wether a given character is present in a string or not*/
#include<stdio.h>
#include<string.h>

 int isPresent(char st[], char c){
 	int i;
 	for(i=0; i <= strlen(st); i++){
 		if(st[i] == c){ return 1; 
		 }	
	 }
	 return 0;
 }

 int main(){
 char st[] = "Atharva";
 char a;
 printf("Enter a char : ");
 scanf("%c", &a);
 printf("\n");
 int c = isPresent(st, a);
 if(c){
 	printf("%c is present in string",a);
 }else{ printf("%c is not present in string",a);
 }

 return 0;
 }

