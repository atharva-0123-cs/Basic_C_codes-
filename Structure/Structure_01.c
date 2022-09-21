#include<stdio.h>
#include<string.h>
struct emp{
	int id;
	float salary;
	char name[10];
};
 int main(){
 struct emp e1;
 e1.id = 100;
 e1.salary = 2567.2568;
 // e1.name = "Atharva"; --> wont work
 strcpy(e1.name, "Atharva");
 
 printf("%d\n",e1.id);
 printf("%.1f\n",e1.salary);
 printf("%s\n",e1.name);
 return 0;
 }

