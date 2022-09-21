/* Write a program conting a function, which cotanis the number of positive intgers in 
Array. */
#include<stdio.h>
void posNum(int Arr[]){
	int i;
	printf("The Only Positive Num of Array are : \n");
	for(i=0; i<5; i++){
	
	if(Arr[i] >= 0){
		printf("  %d ",Arr[i]);
	}
}
}
 int main(){
 	int Arr[5],i;
 	for(i=0; i<5; i++){
 		printf("Enter A %d Num : ",i+1);
 		scanf("%d",&Arr[i]);
 		printf("\n");
	 }
	 posNum(Arr);
 	return 0;
 }
