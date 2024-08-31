/*MT2024051*/
/*Girish Kumar Sahu*/
//27th aug 2024
/*23.Write a program to create a Zombie state of the running program.*/


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

