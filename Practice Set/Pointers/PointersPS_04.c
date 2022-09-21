/*Write a program using a function which calculate the sum and the average of two 
numbers. Use pointers and print the value of sum and average in main() function.*/
#include<stdio.h>

void sum_Avg(int a,int b, int *sum,float *avg){

 *sum = a+b;
 *avg = (float)*sum/2; // Type Casting
	
}
 int main(){
 	int a=3,b=4,sum;
 	float avg;
 	
 	sum_Avg(a,b,&sum,&avg);
 	printf("The sum is %d\n",sum);
 	printf("The Avg is %f\n",avg);
 	return 0;
 }
