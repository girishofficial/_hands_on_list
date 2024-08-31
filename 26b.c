//MT2024051
//GIRISH KUMAR SAHU
//28th aug 2024
/*26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)*/
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int argc, char* argv[]){
	char *path = argv[1];
	argv++;
	execv(path,argv);
	return 0;
}

//after compiling use ./26b ./26b_test_program arg1 arg2
