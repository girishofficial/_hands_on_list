/*
============================================================================
Name : 26b.c
Author : Girish Kumar Sahu
Description : 26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 30th Aug, 2024.
============================================================================
*/


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
/*Sample Output:
arg1
arg2*/
