/*
============================================================================
Name : 16b.c
Author : Girish Kumar Sahu
Description : Write a program to perform mandatory locking.
a. Implement write lock
b. Implement read lock
Date: 24th Aug, 2024.
============================================================================
*/

 


#include<stdio.h>
#include<unistd.h>
#include<sys/file.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
int main(int arg, char *args[]) {
	int fd = open(args[1], O_RDONLY | O_CREAT, 0700);
	if (fd == -1) {
		printf("Error While accessing file");
		return 0;
	}
	struct flock read_lock = {F_RDLCK,0,0,0,0};
	fcntl(fd, F_SETLKW, &read_lock);
	printf("File has read lock\n");
	getchar();
	read_lock.l_type = F_UNLCK;
	fcntl(fd, F_SETLKW, &read_lock);
	return 0;
}

//Sample output
//File has read lock