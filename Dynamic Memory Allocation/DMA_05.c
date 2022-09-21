//4)realloc() 

 //3)free()
#include<stdio.h>
#include<stdlib.h>
 int main(){

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
 
 // Reallocate ptr using eralloc()
 for(i=0; i<10; i++){
 	ptr = realloc(ptr, 10*sizeof(int));
 	printf("Enter %d element value : ",i+1);
 	scanf("%d", &ptr[i]);
 }
 for(i=0; i<10; i++){
 	printf("The %d element value : %d\n",i+1,ptr[i]);
 }
 return 0;
 }
 

