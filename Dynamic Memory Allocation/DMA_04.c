//3)free()
#include<stdio.h>
#include<stdlib.h>
 int main(){

 int *ptr, *ptr2;
 int i;
 ptr = (int *)malloc(5 * sizeof(int)); 
 for(i=0; i<5000; i++){
 	ptr2 = (int *)malloc(5000 * sizeof(int));
 	printf("Enter %d element value : ",i+1);
 	scanf("%d", &ptr2[i]);
 	free(ptr2);
 }
 for(i=0; i<5; i++){
 	printf("The %d element value : %d\n",i+1,ptr[i]);
 }
 return 0;
 }
 
