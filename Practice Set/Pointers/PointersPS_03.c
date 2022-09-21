/* Write a program to change the value of variable to ten times of it's current 
value. Write a function and pass the value by reference.*/
#include<stdio.h>
void ten_T(int *i);
void ten_T(int *i){
	printf("The value of ptr = %d\n",*i);
}
int main(){
	
	int i = 2,ptr;
	ptr = i*10;
	ten_T(&ptr);
	
	return 0;
}
