//Types of function calls
//2) Call by Reference
#include<stdio.h>
void swap(int *a,int *b);//Call by Reference
void wrong_swap(int a,int b);// call by value

void wrong_swap(int a,int b){// call by value
	int temp;
	temp = a;
	a = b;
	b = temp;
	
}
void swap(int *a,int *b){//Call by Reference
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main(){
	int x = 3,y = 4;
//	wrong_swap(x,y); //will not work due to call by value
	printf("the value of x and y are %d and %d\n",x,y);
	
	swap(&x , &y);//will work due to call by reference
	printf("the value of x and y are %d and %d\n",x,y);
	return 0;
}
