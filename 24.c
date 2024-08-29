//MT2024051
//Girish Kumar Sahu

/*Write a program to create an orphan process.*/

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
	
