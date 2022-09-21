// typedef
#include<stdio.h>
#include<string.h>
typedef struct emp{
	int id;
	float salary;
	char name[10];
} emp;

void show(emp e1){
	printf("The id of emp : %d\n",e1.id);
	printf("The salayr of emp : %.2f\n",e1.salary);
	printf("The name of emp : %s\n",e1.name);
	e1.id = 102; // if change e1.id here , It will not effect in main function. 
}
 int main(){
 	
	 // Declaring e1 and ptr
  emp e1;
  emp *ptr;
 
  // pointing ptr to e1
   ptr = &e1;
// (*ptr).id = 101;
   ptr->id = 101; 
   ptr->salary = 2567.2568;
   strcpy(ptr->name, "Atharva");
   show(e1);
 return 0;
 }

