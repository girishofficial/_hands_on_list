/*GIRISH KUMAR SAHU*/
/*MT2024051*/

/*Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){
	int fd1 = creat("file1.txt", O_RDWR);
	int fd2 = creat("file2.txt", O_RDWR);
	int fd3 = creat("file3.txt", O_RDWR);
	int fd4 = creat("file4.txt", O_RDWR);
	int fd5 = creat("file5.txt", O_RDWR);

	while(1);
}

/*use & while running then do cd /proc/pid and then  cat /status*/
