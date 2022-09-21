// Write a program line produce in a 'c program' : 'printf("%d%d%d\n",a,++a,a++);'

#include<stdio.h>

	int main(){
		
		int a = 3;
		printf("%d %d %d", a, ++a, a++); /* Note : In printf function OR in GCC 
		                        compiler , Arguments can pass from right to left*/ 
		                                         
		return 0;
		
	}
