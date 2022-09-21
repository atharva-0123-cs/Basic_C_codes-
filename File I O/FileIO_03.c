//Types of Files
// Quick Quiz
#include<stdio.h>
 int main(){
 int num1,num2;
 FILE *ptr;
 ptr = fopen("Atharva.txt","r");
 if(ptr == NULL){
 	printf("This File dose not exist");
 }
 else{
 fscanf(ptr, "%d", &num1);
 printf("The value of num1 : %d\n", num1);
 
 fscanf(ptr, "%d", &num2);
 printf("The value of num2 : %d\n", num2);
  
  }
 fclose(ptr);
 return 0;
 
 
 }

