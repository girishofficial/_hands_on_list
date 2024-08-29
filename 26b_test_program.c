#include <stdio.h>

int main(int argc,char* argv[]){
	printf("This is output for running program\n");
	for(int i = 1;i<argc;i++){
		printf("Argument %d : %s\n",i,argv[i]);
	}
	return 0;
}
