/*
============================================================================
Name : 11.c
Author : Girish Kumar Sahu
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl
Date: 17th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	int fd,fd2,fd1,fd3;
	fd = open("dup",O_RDONLY);
	printf("old file descriptor is %d\n",fd);
	fd1 = dup(fd);
	printf("before using dup2 fd is %d\n",fd1);
	fd2 = dup2(fd,6);
	printf("new file descriptor is %d\n",fd2);
	fd3 = fcntl(fd,F_DUPFD);
	printf("using fcntl:%d\n",fd3);

}

//Sample Output
/*old file descriptor is 3
before using dup2 fd is 4
new file descriptor is 6
using fcntl:5
*/
