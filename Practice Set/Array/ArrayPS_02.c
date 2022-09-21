/* If S[3] is 1D array of integers then, *(S+3) refes to the third element :
1)True
2)False
 */
 // Solution : False
#include<stdio.h>
 int main(){
 	int S[3],*ptr;
 	ptr = S+2; // Assing Addres of thrird element of S Arrar to the ptr pointer
 	if(ptr == (S+3)){
 		printf("Ture");
	 }
	 else{ printf("False");
	 }
	 return 0;
 } 
