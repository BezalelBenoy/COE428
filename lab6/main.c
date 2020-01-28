#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
extern int pop();
extern void push(int);
extern int heapDelete();
extern void addHeap(int);
extern void sortHeap(int);
extern int heapSize();
extern void printtree(int);
extern void printstack();


int main(int argc, char * argv[])
{
  int value;
  int s,y,count=0;
  while (scanf("%d\n",&value)!=EOF) {
    fprintf(stderr,"Reading Input:%d\n",value);
    addHeap(value);
    }

	s=(heapSize()-1)/2;
	for(y=s;y>=0;y--)
		sortHeap(y);
	printf("\n");
	printtree(0);
	printf("\n");
	count = heapSize();
	for(y=0;y<count;y++){
		int delete= heapDelete();
		push(delete);
		//printf("%d\n",delete);

	}
	
	printf("\n");
	//printstack();
	for(y=0;y<count;y++){

		printf("%d\n",pop());
	//printf("\n");
	//printstack();
	}
	exit(0);}
    
    
    
