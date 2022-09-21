/* Write a finction to claculate force of attraction on a body of mass 'm' 
excrited by earth ? */

#include<stdio.h>

int Force(int m);

	int main(){
		
		float m = 10,f;
		f = Force(m);
		printf("Force = %.2f",f);
		
		return 0;
	}
	int Force(int m){
	
	float g = 9.8,f;
	f = m*g;
	return f;
	
	}
