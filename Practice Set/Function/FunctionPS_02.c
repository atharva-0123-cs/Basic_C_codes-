// Write a function to convert celeius tempeture into forenhrit ?

#include<stdio.h>

int Convert(float temp);

int Convert(float temp){
		
		float fore;
		fore = (temp * 9/5) + (32);
		return fore;

	}

	int main(){
		
		float temp = 0,d;
		d = Convert(temp);
		printf("Temperture Conversion is %f",d);
		
		return 0;
	}
	
	
