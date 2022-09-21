/* Write a program containg a function which revers the array passed to it. */

// Normal Approach : 
 /* 
#include<stdio.h> 
void revArr(int Rev[]){
	int i;
	printf("The Revers Array \n");
	for(i=5; i>0; i--){
 		printf(" %d ",Rev[i-1]);
	 }
}

 int main(){
 	int Rev[5],i;
 	for(i=0; i<5; i++){
 		printf("Enter A %d Num : ",i+1);
 		scanf("%d",&Rev[i]);
 		printf("\n");
	 }
	 revArr(Rev);
 	return 0;
 }
 */
 // pointer Array Approach : 
 #include<stdio.h>
 void revArr(int *arr, int n){
 	int i,temp;
 	for(i=0; i<(n/2); i++){
 		temp = arr[i];
 		arr[i] = arr[n-i-1];
 		arr[n-i-1] = temp;
	 }
 }
  int main(){
  	int arr[] = {1,3,2,4,6,9,8},i;
  	revArr(arr, 7);
  	for(i=0; i<7; i++){
 		printf("The value of %d element if %d\n",i+1,arr[i]);
	 }
  	return 0;
  }
