#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  int pchar;
  while ((ch = getchar()) != '\n') {
  	if(ch == '<'||ch == '/')
		pchar =ch;  
   else if (isalpha(ch)){
	if(pchar !='/')
	push(ch);
   else if(pop()!=ch){
	printf("NOT Valid\n");
	exit(1);
}}}
	if(isEmpty()>0){
	printf("NOT Valid \n");
	exit(1);}
	else
	printf("Valid \n");
	exit(0);}
