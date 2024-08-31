/*
============================================================================
Name : 30.c
Author : Girish Kumar Sahu
Description : Write a program to run a script at a specific time using a Daemon process.
Date: 30th Aug, 2024.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include<sys/stat.h>
#include<stdlib.h>

int main(){
	if (!fork()){
		setsid();
		chdir("/");
		umask(0);
		while(1){
			sleep(5);
			printf("daemon is running");
			}
		}
		else{
		exit(0);
		}
}

/*Sample Output
daemon is runnig*/
