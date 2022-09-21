//Passing Arrays to Functions
#include<stdio.h>

void printArr(int *ptr, int n){ // function prototype
// [OR] void printArr(int ptr[], int n){ //function prototype
	int i;
	for(i=0; i<n; i++){
		printf("The vlaue of element %d : %d\n", i+1, *(ptr+i));
	//[OR] printf("The vlaue of element %d : %d\n", i+1, ptr[i]);	
	}
	ptr[2] = 40; //  This value will be change in main array i.e. in arr as well.
	printf("The value of ptr[2] : %d\n",ptr[2]);
	printf("The Address of ptr[2] : %d\n",&ptr[2]);
	
}
 int main(){
 	int arr[] = {30,47,87,46,100,29,10};
 	printArr(arr, 7); // function call
	// [OR] pritArr(&arr[0], 7); // function call
	printf("The value of ptr[2] in main Array i.e. in arr : %d\n",arr[2]);
 	return 0;
 }
