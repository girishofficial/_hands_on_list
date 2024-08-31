/*MT2024051*/
/*Girish Kumar Sahu*/
/*22nd aug 2024*/

/*Write a program to display the environmental variable of the user (use environ).*/

#include <stdio.h>
#include <unistd.h>
extern char **environ;
int main(){
	while(*environ){
		printf("%s\n",*environ);
		environ++;
	}
	return 0;
}
