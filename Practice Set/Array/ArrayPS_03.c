/* Write a programe to create an array of 10 integers andd store multiplication 
table of 5 in it. */
#include<stdio.h>
 int main(){
 	int Mul[10],i;
 	for(i=0; i<10; i++){
 		Mul[i] = 5*(i+1);
 		printf("5*%d = %d\n",i+1,Mul[i]);
	 }
 	return 0;
 }
