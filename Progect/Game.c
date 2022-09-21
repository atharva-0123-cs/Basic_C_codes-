// Snack, Water, Gun.
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

 int swg(char you, char comp){
// return 1 if you win, -1 if you lose and 0 if draw.

//Condition for draw
//Case Covered: ss gg ww
 	if(you == comp){
 		return 0;
	 }
//Condition for Non-draw
//Case Covered:	sg gs sw ws gw wg
	if(you=='s' && comp=='g'){ return -1;
	}else if(you=='g' && comp=='s'){ return 1;
	}
	if(you=='s' && comp=='w'){ return -1;
	}else if(you=='w' && comp=='s'){ return 1;
	}
	if(you=='g' && comp=='w'){ return -1;
	}else if(you=='w' && comp=='g'){ return 1;
	}
 }
 
 int main(){
 char you, comp;
 srand(time(0));
 int num = rand()%100 +1; // --> It gives random number between 1 to 100
 
 if(num<33){ comp = 's';
 }else if(num>33 && num<66){ comp = 'w';
 }else{ comp = 'g';
 }
 
 printf("Enter 's' for snack 'w' for water 'g' for gun : ");
 scanf("%c", &you);
 int result = swg(you, comp);
 printf("You chose %c and computer chose %c.\n",you, comp);
 if(result = 0){ printf("Draw!");
 }else if(result = 1){ printf("You Win!");
 }else{ printf("You Lose!");
 }
 return 0;
 }

