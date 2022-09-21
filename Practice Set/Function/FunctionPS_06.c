// write a recursive function to claculate the sum of first natural numbers ?
#include<stdio.h>

int sumofN(int n);

	int main(){
		
		int n,sum;
		printf("Enter n natural numbers = \n");
		scanf("%d", &n);
		sum = sumofN(n);
		printf("The sum of first natural numbers is %d",sum);
		
		return 0;
	}
	
	int sumofN(int n){
		if(n == 0){
			return 0;
		}
		else{
			return n + sumofN(n-1);
		}
		
		
	}
