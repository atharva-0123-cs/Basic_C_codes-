/* Write a structure capable of storing date. Write a function to compare those 
dates.*/
#include<stdio.h>
 typedef struct date{
 	int day;
 	int month;
 	int year;
 }date;
 
 void display(date  d){
 	printf("The Date : %d/%d/%d\n",d.day, d.month, d.year);
 }
 int compDate(date d1, date d2){
 	//Make decision on yhe basis of Date comparsion
 	if(d1.year>d2.year){
 		return 1;
	 }
	 if(d1.year>d2.year){
 		return 1;
	 }
	//Make decision on yhe basis of Date comparsion 
	 if(d1.month>d2.month){
 		return 1;
	 }
	 if(d1.month<d2.month){
 		return -1;
	 }
	//Make decision on yhe basis of Date comparsion 
	 if(d1.day>d2.day){
 		return 1;
	 }
	 if(d1.day<d2.day){
 		return -1;
	 }
	return 0; 
 }
 int main(){
 date d1 = {1, 2 ,2003};
 date d2 = {1, 2 ,2003};
 display(d1);
 display(d2);

 int a = compDate(d1, d2);
 printf("Date comparision returns : %d",a);

 return 0;
 }

