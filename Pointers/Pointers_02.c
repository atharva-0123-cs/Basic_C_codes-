//Types of function calls
//1) Call by Value
#include<stdio.h>
int sum(int a,int b); //1) Call by Value
int sum(int a,int b){ //1) Call by Value
	int c;
	c = a+b;
	a = 345;
	b = 245;
	printf("The value of a and b in function are %d and %d\n",a,b);/* if we change the
	value of variable (here a,b) wthin a function , then it will change */ 
	return c;
}
	int main(){

int a = 3,b = 4;
int c = sum(a,b); //1) Call by Value
printf("sum = %d\n",c);
printf("The value of a and b are %d and %d\n",a,b);/* Even if we change the value of 
variables wthin a function ,Nothing happens to the vaeiables in main function*/
		
		return 0;
	}


