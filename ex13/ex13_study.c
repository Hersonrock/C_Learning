#include<stdio.h>

int main(int argc,char *argv[]){
	char letters[]= "Hello";
	printf("Letters has size: %ld, and it contains \"%s\" including the \'\\0\' character\n",sizeof(letters),letters);

	char *name= "Jhon";
	printf("The variable \"name\" contains %s\n",name);

	char *states[]= {"New York", "California", "Texas"};
	printf("The variable \"states\" contains multiple strings. %s %s %s \nIt has size %ld\n",states[0], states[1], states[2] ,sizeof(states));
	return 0;
}
