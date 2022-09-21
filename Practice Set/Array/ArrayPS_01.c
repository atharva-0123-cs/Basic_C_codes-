/*Que1 : Create an Array of 10 numbers. Verify using pointer  Arithmetic that (ptr+2) points 
to the third element where ptr is a pointer pointing to the first element of the array.
*/
#include<stdio.h>
 int main(){
 	int Arr[10];
 	// int *ptr = &Arr[0]; OR
 	int *ptr = Arr;
 	ptr = ptr + 2;
 	if(ptr == &Arr[2]){
 		printf("This point to the same loaction in memory\n");
	 }
	 else{
	 		printf("This do not point to the same loaction in memory\n");
	 }
	 
 	return 0;
 }
