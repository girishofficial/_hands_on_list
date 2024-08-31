
/*
============================================================================
Name : 21.c
Author : Girish Kumar Sahu
Description : Write a program, call fork and print the parent and child process id.
Date: 29th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <unistd.h>


int main(){
	pid_t pid = fork();

	if(pid < 0){
		perror("Fork failed");
		return 1;
	}else if (pid == 0){
		printf("Child process : PID = %d, Parent PID = %d\n", getpid(), getpid());
	}else{
		printf("Parent Process : PID = %d, Child PID = %d\n", getpid(), getpid());
	}

	return 0;
}

//Sample Output
/*Parent Process : PID = 8702, Child PID = 8702
Child process : PID = 8703, Parent PID = 8703
*/
