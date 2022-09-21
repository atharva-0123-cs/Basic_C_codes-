// Multi-Dimensional Arrays
#include<stdio.h>
 int main(){
 	int n_student = 2,i,j;
 	int n_subject = 2;
 	int marks[2][2];
 	
 	for(i=0; i<2; i++){
 		for(j=0; j<2; j++){
 			printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
 			scanf("%d",&marks[i][j]);
		 }
	 }
	 for(i=0; i<2; i++){
 		for(j=0; j<2; j++){
 			printf("The marks of student %d in subject %d\n",i+1,j+1);
 			
		 }
	 }
 	return 0;
 }
