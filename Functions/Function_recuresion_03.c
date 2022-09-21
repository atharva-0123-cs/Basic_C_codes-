/* Since we can write factriol of a number in terms of itself , So we can program it
 using RECURSION */

#include<stdio.h>

int factrioal(int x);


int main(){
	int a = 5,b;
	b = factriol(a);
	printf("The value of factriol %d is %d",a,b);
	return 0;
}

int factriol(int x){
	
	if(x==1 || x==0){
		return 1;
	}
	else{
		return x * factriol(x-1);
	}
}
