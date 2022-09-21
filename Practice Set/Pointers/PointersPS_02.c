/* Q.Write a programe having a variable i. Print the address of i, Pass this variable
to a function and print it's address. (Que.Are these address same? Why?)*/
/* ( Que.solution : These address are same,if   )
#include<stdio.h>
void print_Add(int *i);
void print_Add(int *i){
	printf("The address of i whtin a function is %u\n",i);
}
int main(){
	int i = 1,*ptr;
	
	printf("The address of a is %u\n",&i);
	print_Add(&i);
	return 0;
}*/


#include<stdio.h>
void print_Add(int a);
void print_Add(int a){
	printf("The Address of a is %u\n",&a);
}
int main(){
	int i = 1,*ptr;
	
	printf("The address of a is %u\n",&i);
	print_Add(i);
	return 0;
}

