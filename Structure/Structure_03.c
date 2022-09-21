/* Passing Pointer to a function */
#include<stdio.h>
#include<string.h>

struct emp{
	int id;
	float salary;
	char name[10];
};
void show(struct emp e1){
	printf("The id of emp : %d\n",e1.id);
	printf("The salayr of emp : %.2f\n",e1.salary);
	printf("The name of emp : %s\n",e1.name);
	e1.id = 102; // if change e1.id here , It will not effect in main function. 
}
 int main(){
 	struct emp e1;
 	 e1.id = 100;
     e1.salary = 2567.2568;
  //e1.name = "Atharva"; --> wont work
     strcpy(e1.name, "Atharva");
     show(e1);
     printf("The id of emp : %d\n",e1.id);

 return 0;
 }

