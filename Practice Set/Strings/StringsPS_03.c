#include<stdio.h>
#include<string.h>

char Strcpy(char* str2){
	int i;
	char str1[10];
	for(i=0; i<strlen(str2); i++){
			str1[i] = str2[i];
	}
	str1[i+1] = '\0';
 return *str1;
}

 int main(){
 char str1[10], str2[10] = "Atharva";
  	printf("The string is : %s",Strcpy(str2));


 return 0;
 }

