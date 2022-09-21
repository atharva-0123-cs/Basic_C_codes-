/* Write a program to count the occurebce of a given charcter in string. */
#include<stdio.h>

int occurence(char str[], char c){
	char *ptr = str;
	int count = 0;
	while(*ptr != '\0'){
		if(*ptr == c){
			count++;
		}
		ptr++;
	}
	return count;
}
 int main(){
 char str[] = "Atharva";
 int count = occurence(str, 'A');
 printf("Occurence : %d",count);

 return 0;
 }

