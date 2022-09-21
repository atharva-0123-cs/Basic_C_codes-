//Write your own version of 'strlen' function. 
#include<stdio.h>
int StrLen(char *st){
	//char *ptr = st;
	int len;
	while(*st != '\0'){
		st++;
		len++;
	}
	return len;
}
 int main(){
 	char st[] = "Atharva";
 	int  l = StrLen(st);
 	printf("The length of string : %d",l);
 }
