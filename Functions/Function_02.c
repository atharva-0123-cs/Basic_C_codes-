#include<stdio.h>

	int sum(int a , int b); // Function Prototype
	
	// Function Defination
	int sum(int a , int b){
	int c;
	c = a + b;
	return c;
	}
	int Change(int q);
	
	int Change(int q){
		q = 2;
		return q;
	}

int main(){
	int x,y,c,q=4,p=4;
	printf("Enter X value = ");
	scanf("%d\n",&x);
	printf("Enter Y value = ");
	scanf("%d\n",&y);
	c = sum(x,y); // Function Call
	printf("Add = %d",c);
	p = Change(q);
	printf("q = %d",q);
	printf("p = %d",p);
	
	return 0;
}
