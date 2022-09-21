/* Take a name and salary of  two  employees as input from the user and write them 
to a text file in following fomat:
  name1, 3300
  name2, 7700 */
#include<stdio.h>
struct Emp{
	char name[10];
	int salary;
};  
 int main(){
 int i=0, j=0;	
 struct Emp e1, e2;
 FILE *ptr;
 ptr = fopen("FileIOPS_03.txt", "w");
 
 printf("Ener the name of first Emp : ");
 scanf("%s",&e1.name);
  printf("Ener the salary of first Emp : ");
 scanf("%d",&e1.salary);
 
 printf("Ener the name of second Emp : ");
 scanf("%s",&e2.name);
 printf("Ener the salary of first Emp : ");
 scanf("%d",&e2.salary);
 
  while(e1.name[i] != '\0'){
 	fputc(e1.name[i], ptr);
 	i++;
 }
 fprintf(ptr,", %d\n",e1.salary);
 
   while(e2.name[j] != '\0'){
 	fputc(e2.name[j], ptr);
 	j++;
 }
 fprintf(ptr,", %d\n",e2.salary);
 printf("Program RUN");
 fclose(ptr);
 return 0;
 }

