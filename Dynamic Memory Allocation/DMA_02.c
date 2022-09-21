//2)calloc() - Continuous Allocation
#include<stdio.h>
#include<stdlib.h>
 int main(){
  int *ptr;
 int i;
 ptr = (int *)calloc(5, sizeof(int));//-->little difference of calloc(,) and malloc(*)
 /*for(i=0; i<5; i++){
 	printf("Enter %d element value : ",i+1);
 	scanf("%d", &ptr[i]);
 }*/
// Note : Calloc initializes each memory block with a defalut value of 0.  
 for(i=0; i<5; i++){
 	printf("The %d element value : %d\n",i+1,ptr[i]);
 }
 
 
//Note : if the space is not sufficien, memory allocation fails and a NULL pointer
//is returened.
 return 0;
 }

