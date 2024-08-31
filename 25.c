/*
============================================================================
Name : 25.c
Author : Girish Kumar Sahu
Description : 25. Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call).
Date: 27th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <unistd.h>
#include <signal.h>

int main(){
	int i, j, k;

	if(!(i=fork()))
		sleep(1);
	else
		if(!(j=fork()))
			sleep(3);
		else{
			if(!(k=fork()))
				sleep(10);
			else
				waitpid(j,NULL,0);
		}
}
