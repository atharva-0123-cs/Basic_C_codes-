//Arrays with Pointers
#include<stdio.h>

 int main(){
 	int i;
 	int marks[4]; 
 	int *ptr;
 	ptr = &marks[0]; // [OR] ptr = marks;
	
	for(i=0; i<4; i++){
		printf("Enter the marks of student %d : ",i+1);
		scanf("%d",ptr);
		ptr++;
		printf("\n");
	}
	printf("\n");
	for(i=0; i<4; i++){
		printf("The marks of student %d : %d\n",i+1,marks[i]);
		
	}
	 	
 	return 0;
 }
