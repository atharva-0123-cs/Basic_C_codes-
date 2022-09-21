// Standard Library Function For Strings
#include<stdio.h>
#include<string.h>
 int main(){
 	// strlen : Length of sting
 	char *st = "Atharva";
 	int a =  strlen(st);
 	printf("Length of sting : %d\n\n",a);
 	
 	// strcpy : Copy the strings (strcpy(target, source))
 	char *str1 = "Atharva", str2[10];
 	strcpy(str2, str1);
 	printf("Now str2 is : %s\n\n",str2);
 	
 	//strcat : st1 + st2 (Add up two strings)
	char *st1 = "Atharva", st2[40] = " is so COOL";
 	strcat(st2, st1);
 	printf("Now st1 + st2 is : %s\n",st1);
 	
 	//strcmp : st1 + st2 (Add up two strings)
	char *s1 = "Atharva", s2[40] = "Aryash";
 	int val = strcmp(s1, s2);
 	printf("Now val is : %d",val);
 	return 0;
 	
 	
 }
