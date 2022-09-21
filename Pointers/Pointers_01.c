//POINTER//
#include<stdio.h>
#include<conio.h>

	int main(){
		
		int i,*j,**k;
		i = 72;
		j = &i; // j will store the addres of i
		k = &j;
		printf("The value of i = %d\n",i);
		printf("The value of i = %d\n",*j);
		printf("The Addres of i in terms of  j = %u\n",j);
		printf("The Addres of j in terms of j = %u\n",&j);
		printf("The Addres of i = %u\n",&i);
		//pointer to a pointer
		printf("The value of i in terms of k =  %d\n",**k);
		printf("The Addres of i in terms of k = %u\n",*k);
		printf("The Addres of j in terns of k = %u\n",k);
		printf("The Addres of k = %u\n",&k);
	


		
		
		return 0;
	}

