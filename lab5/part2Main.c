#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
extern int pop();
extern void push(int);
extern int isEmpty();

int main(int argc, char * argv[])
{
  int ch;
  int pchar =0;
  int i;
  int counter [2][100];
	for(i=0;i<100;i++){
		counter[0][i]=0;
		counter[1][i]=0;}

  while ((ch = getchar()) != '\n') {
  	if(ch == '<'||ch == '/')
		pchar =ch;  
   else if (isalpha(ch)){
		if(pchar !='/'){
			for(i=0;i<100;i++){
				if (counter[0][i]==ch){
				counter[1][i]++;
				break;
			}
 		else if(counter[0][i] ==0){
			counter[0][i]=ch;
			counter[1][i]++;
			break;
		}
	}
	push(ch);
	}
   else if(pop()!=ch){
	printf("NOT Valid");
	exit(1);
}}}
	if(isEmpty()>-1){
		printf("NOT Valid ");
		exit(0);}
	else{
		printf("Valid\n");
		for(i=0;i<100;i++){
			if(counter[0][i]!=0)
			printf("%c %d \n", counter[0][i], counter[1][i]);
			else
			break;
}}

	exit(1);}
    
    
    

