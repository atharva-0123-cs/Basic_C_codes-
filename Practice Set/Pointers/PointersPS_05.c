/*Write a program to print the value of variable 'i' using "pointer to pointer" type 
of variable*/
#include<stdio.h>
 int main(){
 	int i = 10,*ptr,**ptr1;
 	ptr = &i;
 	ptr1 = &ptr;
 	printf("the value of variable 'i' using pointer to pointer type %d\n",**ptr1);
 	return 0;
 }
