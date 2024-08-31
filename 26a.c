//MT2024051
//GIRISH KUMAR SAHU
//28th Aug 2024
/*26. Write a program to execute an executable program.
a. use some executable program*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	execv(argv[1], &argv[1]);
	return 0;
}

/*use test_program as an input that is ./26a ./test_program*/
