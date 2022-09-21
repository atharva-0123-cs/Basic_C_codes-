// Write a program using recursion to calculate n^th element of 'Fibonacci Serise' ?
// Note : Time Coplixty of following program is O(2^n)
#include<stdio.h>

int fib(int n);

	int main(){
		int n,r;
		printf("Enter n^th number = \n");
		scanf("%d",&n);
		r = fib(n);
		printf("%d^th Fibonacci Number is %d",n,r);
		
		
		return 0;
	}
	
	int fib(int n){
		int r;
		if(n == 1){
			return 0;
		}
		else if(n == 2){
			return 1;
		}
		/*else if(n == 0){
		
		    return 0;
		}*/
	
		else{
		return  fib(n-1) + fib(n-2);
			
		}
	}
