//Pointer Arithmetic - 02
#include<stdio.h>
 
 int main(){
 	//Following opreations can be performed on pointers :
 	//1)Addition of a number from a pointer.
	int i = 34;
 	int *ptr = &i;
 	printf("The value of ptr = %u\n",ptr);
 	ptr++; // (ptr = ptr + 1)
 	printf("The value of ptr = %u\n",ptr);
 	//2)Subtraction of a number from a pointer.
 	ptr--; // (ptr = ptr - 1)
 	printf("The value of ptr = %u\n",ptr);
 	//3)Subtraction of one pointer from another.
 	int a = 10, *ptr1, *ptr2, b = 20, sub;
 	
 	//int  *ptrchar;
 	//char c = 'c';
 	//ptrchar = &c;
 	
 	ptr1 = &a;
 	ptr2 = &b;
 	
 	printf("The value of ptr1 = %u\n",ptr1);
 	printf("The value of ptr2 = %u\n",ptr2);
 	//printf("The value of ptrchar = %u\n",ptrchar);
 	sub = ptr1 - ptr2;
 	//sub = ptrchar - ptr1;
 	printf("Subtraction of two pointers = %d\n",sub);
 	return 0;
 	
 }
