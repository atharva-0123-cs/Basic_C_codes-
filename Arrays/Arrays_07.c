//Q.create a 2-d array by  taking input from the user. Write a display function to 
// print the content of this 2-d array on the screen.
#include<stdio.h>

void inputArr(int Arr[][2]){ //Subcarit Notation -It used to pass 2-D Array to fun
	int i,j;
	for(i=0; i<3; i++){
 		for(j=0; j<2; j++){
 			printf("Enter The value of Arr[%d][%d] \n: ",i,j);
 			scanf("%d",&Arr[i][j]);
		 }
	 }

}

void displayArr(int (*Arr)[2]){ // Pointer Notation -It used to pass 2-D Array to fun
	
	int i,j;
	printf("The Arry is \n");
    for(i=0; i<3; i++){
 		for(j=0; j<2; j++){
 			printf("%d ",Arr[i][j]);
 		
		 }
		 printf("\n");
	 }

}
 int main(){
 
 	int Arr[3][2];
 	 inputArr(Arr);
	 displayArr(Arr);
 	return 0;
 } 
