/* Que : Writr a program with three functions :
1) Good morning Fun which Prints "Good Morning"
2) Good Afternoon Fun which Prints "Good Afternoon"
3) Good Night Fun which Prints "Good Night"
*/

// Solution : 

#include<stdio.h>

void Good_morning();
void Good_afternoon();
void Good_night();

void Good_morning(){
	printf("Good Morning\n");
}
void Good_afternoon(){
	printf("Good afternoon\n");
}

void Good_night(){
	printf("Good night\n");
}

int main(){
	printf("1\n");
 Good_morning();
 	printf("2\n");
 Good_afternoon();
 	printf("3\n");
 Good_night();
	return 0;
}
