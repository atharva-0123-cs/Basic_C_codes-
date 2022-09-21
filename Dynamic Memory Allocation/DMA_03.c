//calloc() - quick quize.
#include<stdio.h>
#include<stdlib.h>
 int main(){

 int *ptr;
 int i,n;
 printf("How many intgers you want to print : ");
scanf("%d", &n);
 ptr = (int *)calloc(n, sizeof(int)); 
 for(i=0; i<n; i++){
 	printf("Enter %d element value : ",i+1);
 	scanf("%d", &ptr[i]);
 }
 for(i=0; i<n; i++){
 	printf("The %d element value : %d\n",i+1,ptr[i]);
 	}
 	return 0;
 }

