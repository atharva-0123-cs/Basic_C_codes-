//FILE Pointer

#include<stdio.h>
 int main(){
 FILE *ptr;
 ptr = fopen("sample.txt","r"); /* --> Reading file - if file dosent exist, the it 
 returns NULL */
 //ptr = fopen("sample2.txt","w"); // --> Writing file - create NEW File 
 fclose(prt);
 return 0;
 }

