/* Write a function sumVector() which returns the sum of two vectors passed to it. 
The vectors must be two dimensional. */
#include<stdio.h>
 struct vector{ 
 int magnitude;
 int x, y;
 };
 
 struct vector sumVector(struct vector v1, struct vector v2){
 	struct vector sum;
 	sum.magnitude = v1.magnitude + v2.magnitude;
 	sum.x = v1.x + v2.y;
 	sum.y = v1.x + v2.y;
 	return sum;
 }
 int main(){
 
 struct vector v1, v2, sum;
 v1.magnitude = 100;
 v1.x = 21;
 v1.y = 38;
 printf("Magnitude = %d",v1.magnitude);
 printf(" x axis is %d and y axis is %d\n",v1.x, v1.y);
 
 
 v2.magnitude = 200;
 v2.x = 31;
 v2.y = 48;
 printf("Magnitude = %d",v2.magnitude);
 printf(" x axis is %d and y axis is %d\n",v2.x, v2.y);
 
 sum = sumVector(v1,v2);
 printf("The sum of two vectors = %d\n", sum.magnitude);
 printf(" x axis is %d and y axis is %d\n",sum.x, sum.y);

 return 0;
 }

