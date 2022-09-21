/*  */
#include<stdio.h>
 typedef struct complex{
 	int real;
 	int complex;
 }comp;
// void display(comp c){

 //printf("The complex Num is : %d+%di\n",c.real, c.complex);
// }
// OR
 void display(comp c[]){
 	int i;
 	for(i=0; i<5; i++){
 	printf("The complex Num is : %d+%di\n",c[i].real, c[i].complex);	
	 }
 }
 // OR
 /*
 --this will not work-- 
  void display(comp *c){
 	int i;
 	for(i=0; i<5; i++){
 	printf("The complex Num is : %d+%di\n",c.real++, c.complex++);
 	--OR--
	printf("The complex Num is : %d+%di\n",c[i]->real, c[i]->complex++);
	 --OR--
	printf("The complex Num is : %d+%di\n",(*c[i]).real, (*c[i]).complex); 	
	 }
 }*/
 
 int main(){
 	int i;
 comp c_nums[5];
 for(i=0; i<5; i++){
 	printf("Enter real part: ");
 	scanf("%d",&c_nums[i].real);
 	printf("Enter imaginary part: ");
 	scanf("%d",&c_nums[i].complex);
 }
printf("\n"); 
 
 //for(i=0; i<5; i++){
 //	display(c_nums[i]);
 //}
 // OR
 display(c_nums); 

 return 0;
 }

