/* create a 2D vector using structures in c lang */
#include<stdio.h>
 struct vector{ 
 int magnitude;
 int x, y;
 }; 
 int main(){
 struct vector v1, v2;
 v1.magnitude = 100;
 v1.x = 21;
 v1.y = 38;
 printf("Magnitude = %d",v1.magnitude);
 printf(" x axis is %d and y axis is %d\n",v1.x, v1.y);
 
 v2.magnitude = 200;
 v2.x = 31;
 v2.y = 48;
 printf("Magnitude = %d",v2.magnitude);
 printf(" x axis is %d and y axis is %d",v2.x, v2.y);

 return 0;
 }

