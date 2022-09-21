/*Q.Write a programe to print the address of a variable . Use this address 
to get the value of this variable*/

#include<stdio.h>

int main(){
	int a = 1,*ptr;
	ptr = &a;
	printf("The address of variable a is %u\n",&a);
	printf("The value of a is %d",*ptr);
	return 0;
}
