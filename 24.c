/*
============================================================================
Name : 24.c
Author : Girish Kumar Sahu
Description : Write a program to create an orphan process.
a. use some executable program
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 30th Aug, 2024.
============================================================================
*/


#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>


int main(){
	pid_t pid = fork();

	if(pid > 0){
		printf("parent process is dead.\n");
		exit(0);

	}
	else if(pid == 0){
		sleep(5);
		printf("Child Process now adopted by init\n");
	}
	else{
		printf("fork failed");
		return 1;
	}
	
	return 0;
}

/*Sample Output
parent process is dead*/
