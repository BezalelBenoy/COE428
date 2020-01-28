#include <stdlib.h>
#include <stdio.h>
typedef struct state{
	char name;
	int number;
	int variable;
	struct state*ns0;
	struct state*ns1;}fsm;
fsm states[8];
void intial_states(){
	states[0].name='a';
	states[0].number= 0;
	states[0].ns0= states+5;
	states[0].ns1= states+1;

	states[1].name='b';
	states[1].number=1;
	states[1].ns0=states+6;
	states[1].ns1=states+3;

	states[2].name='c';
	states[2].number=2;
	states[2].ns0=states+2;
	states[2].ns1=states+7;

	states[3].name='d';
	states[3].number=3;
	states[3].ns0=states+0;
	states[3].ns1=states+4;

	states[4].name='e';
	states[4].number=4;
	states[4].ns0=states+2;
	states[4].ns1=states+6;

	states[5].name='f';
	states[5].number=5;
	states[5].ns0=states+1;
	states[5].ns1=states+2;

	
	states[6].name='g';
	states[6].number=6;
	states[6].ns0=states+4;
	states[6].ns1=states+5;
	
	states[7].name='h';
	states[7].number=7;
	states[7].ns0=states+3;
	states[7].ns1=states+0;
}
	void printstates(){
	int x=0;
	for(x=0;x<8;x++){
		if(states[x].variable!=3){
		fprintf(stdout,"%c %c %c\n", states[x].name,states[x].ns0->name, states[x].ns1->name);}
}}
int main(int argc, char * argv[])
{
	intial_states();
	fsm current_state = states[2];
	fprintf(stdout, "Starting state is %c \n", current_state.name);
	fprintf(stdout, "Enter commands\n");
	int x, y=0;
	char in[3];

	while(y!=1){
		for(x=0;x<=4;x++){
		scanf("%c",&in[x]);
		if(in[x]=='\n'){
		printstates();
	}
	}
	if(in[0]=='0'){
	fprintf(stdout,"%c\n",current_state.ns0->name);
	current_state = states[current_state.ns0->number];
	}
}
	if(in[0]=='1'){
	fprintf(stdout,"%c\n",current_state.ns1->name);
	current_state = states[current_state.ns1->number];
	}
	if(in[0]=='p'){
	printstates();
}
	
	
    exit(0);
}

