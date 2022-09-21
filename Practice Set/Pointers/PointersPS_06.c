/*Try problem 3 , Using call by value and verify that it dosent change the value of the
said variable.*/
#include<stdio.h>
void ten_T(int i);
void ten_T(int i){
	printf("The value of ptr = %d\n",i);
}
 int main(){
 	int i = 2,ptr;
	ptr = i*10;
	ten_T(ptr);
	printf("The value of ptr after verifying = %d\n",ptr);
 	return 0;
 }
