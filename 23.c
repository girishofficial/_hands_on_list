/*
============================================================================
Name : 23.c
Author : Girish Kumar Sahu
Description : Write a program to create a Zombie state of the running program.
Date: 29th Aug, 2024.
============================================================================
*/


#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>

int main(){
	pid_t child_pid = fork();

	if(child_pid > 0)
		sleep(20);

	else
		exit(0);

	return 0;
}

/*Sample Output*/