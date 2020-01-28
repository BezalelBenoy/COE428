#include <stdlib.h>
#include "towers.h"
#include <stdio.h>

int main(int argc, char **argv)
{
    int n,from,dest; 

    if (argc == 1) {
	n= 3;
	from= 1;
	dest = 2;
	towers(n,from,dest);
        }
	else if (argc==2){
	n = atoi(argv[1]);
	towers(n,1,2);
}
	else if (argc==4){
	n = atoi(argv[1]);
	from = atoi(argv[2]);
	dest = atoi(argv[3]);
	towers(n,from,dest);	
}
	else {
	fprintf(stderr,"Incorret Invocation,\n");
	exit(1);
}
  
    exit(0);
}


