// Dynamic Memory Allocation
// Functions for DMA in C lang.
//1)malloc()
//2)calloc()
//3)free()
//4)realloc()
#include<stdio.h>
#include<stdlib.h>
 int main(){
//1)malloc() - Memory Allocation
 int *ptr;
 int i;
 ptr = (int *)malloc(5 * sizeof(int)); 
 for(i=0; i<5; i++){
 	printf("Enter %d element value : ",i+1);
 	scanf("%d", &ptr[i]);
 }
 for(i=0; i<5; i++){
 	printf("The %d element value : %d\n",i+1,ptr[i]);
 }
 


 return 0;
 }

