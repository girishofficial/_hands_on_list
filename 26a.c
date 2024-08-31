/*
============================================================================
Name : 26a.c
Author : Girish Kumar Sahu
Description : 26. Write a program to execute an executable program.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 30th Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) {
	execv(argv[1], &argv[1]);
	return 0;
}

/*use test_program as an input that is ./26a ./test_program*/
/*Sample output
This is hello from test_program*/
