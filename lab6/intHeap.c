/**
 *  The functions in this module implement a Heapdata structure
 *  of integers.
 */


/**
 * heapDelete() removes the biggest integer in the heap and returns it.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <tgmath.h>

int size =0;
int heap[1000];

void sortHeap(int a){
	int x;
	int l = (2*a)+1;
	int r = (2*a)+2;
	int m=a;
if((l<size)&&(heap[l]>heap[m]))
	m=l;
if((r<size)&&(heap[r]>heap[m]))
	m=r;
if(m!=a){
	x=heap[m];
	heap[m]=heap[a];
	heap[a]=x;
	sortHeap(m);}}

int heapDelete()
{
	int x;
	size--;
	x=heap[0];
	heap[0]=heap[size];
	heap[size]=x;
	sortHeap(0);
	printf("%d\n",heap[size]);
  return heap[size];//A dummy return statement
}

/**
 *  addHeap(thing2add) adds the "thing2add" to the Heap.
 *
 */
void addHeap(int thing2add)
{
	heap[size]=thing2add;
	size++;
}

/**
 * heapSize() returns the number of items in the Heap.
 *
 */
int heapSize()
{
  return size;  //A dummy return statement
}void printtree(int a){
	int l = (2*a)+1;
	int r = (2*a)+2;
	printf("<node id='%d'>",heap[a]);
	if(l<size)
	printtree(l);
	if(r<size)
	printtree(r);
	printf("</node>");}
