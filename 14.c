/*
============================================================================
Name : 14.c
Author : Girish Kumar Sahu
Description : Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file.
Date: 22nd Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

int main(int argc, char* argv[])
{
struct stat filestat;

int out = lstat(argv[1],&filestat);
printf("file type:       ");

switch(filestat.st_mode & S_IFMT)
{
case S_IFBLK:
	printf("block device\n");
	break;
case S_IFCHR:
	printf("character device\n");
	break;
case S_IFDIR:
	printf("directory\n");
	break;
case S_IFIFO:
	printf("FIFO/pipe\n");
	break;
case S_IFLNK:
	printf("symlink\n");
	break;
case S_IFREG:
	printf("regular file\n");
	break;
default:
	printf("unknown?\n");
	break;
}

}

//Sample Output
//regular file
