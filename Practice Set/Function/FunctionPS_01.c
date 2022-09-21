//Write a program using functions to find average of three numbers ?

#include<stdio.h>



int average(int a, int b, int c);

int average(int a, int b, int c){
	int Ave;
	Ave = (a+b+c)/3;
	return Ave;
}

	int main(){
		
		int a,b,c,d;
		printf("Enter a num is %d = \n",a);
		scanf("%d",&a);
		printf("Enter b num is %d = \n",b);
		scanf("%d",&b);
		printf("Enter c num is %d = \n",c);
		scanf("%d",&c);
		d = average(a,b,c);
		printf("Average of three Num is %d",d);
		
		return 0;
	}
