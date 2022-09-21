/* Write a function slice() to slice a string. It should change the orignal sting such
that it is now the sliced string. Take m and n as the starting and ending postion for
slice. 
*/
#include<stdio.h>
#include<string.h>

void slice(char str[], int m, int n){
		int i=0;
		while((m+i)<n){
			str[i] = str[i+m];
			i++;
		}
	str[i] = '\0';	
}


 int main(){
 	
 	char str[] = "Atharva";
 	//str[3] = '\0';
    slice(str, 1, 4);
    printf(" %s",str);
 	return 0;
 }
