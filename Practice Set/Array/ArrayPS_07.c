// 1D Array Approach : 
/* 
#include<stdio.h>
 int main(){
 	int Mul[30],i;
 	printf("The 2's Table \n");
 	for(i=0; i<10; i++){
 		Mul[i] = 2*(i+1);
 		printf("2*%d = %d\n",i+1,Mul[i]);
	 }
	 printf("\n");
	 printf("The 7's Table \n");
	 for(i=0; i<10; i++){
 		Mul[i+10] = 7*(i+1);
 		printf("7*%d = %d\n",i+1,Mul[i+10]);
	 }
	 printf("\n");
	 printf("The 9's Table \n");
	 for(i=0; i<10; i++){
 		Mul[i+20] = 9*(i+1);
 		printf("9*%d = %d\n",i+1,Mul[i+20]);
	 }
 	return 0;
 }
 */
// 2D Array with Function Approach : 
 #include<stdio.h>
 int main(){
void printTable(int *mulTable, int num, int n){
	printf("The Multipliction of Table of %d is \n",num);
	int i;
	for(i=0; i<n; i++){
		mulTable[i] = num*(i+1);
	}
	for(i=0; i<n; i++){
		printf("%dx%d =  %d\n",num,i+1,mulTable[i]);
	}
	printf("*****************************************\n\n");
} 	
 	int mulTable[3][10];
 	printTable(mulTable[0],2,10);
 	printTable(mulTable[1],7,10);
 	printTable(mulTable[2],9,10);
 	return 0;
 }
