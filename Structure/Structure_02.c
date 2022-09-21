/* Pointer to Structures */
#include<stdio.h>
#include<string.h>
struct emp{
	int id;
	float salary;
	char name[10];
};
 int main(){
 struct emp e1;
 struct emp *ptr;
  
   ptr = &e1;
// (*ptr).id = 101;
   ptr->id = 101; 
  printf("%d\n", e1.id); 

 return 0;
 }

