/*
============================================================================
Name : 9.c
Author : Girish Kumar Sahu
Description : Write a program to print the following information about a given file.
a. inode
b. number of hard links
c. uid
d. gid
e. size
f. block size
g. number of blocks
h. time of last access
i. time of last modification
j. time of last change
Date: 17th Aug, 2024.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<sys/stat.h>
#include<strings.h>

int main(int argc, char* argv[]){

	struct stat s;
	stat(argv[1], &s);
	printf("inode=%ld\n",s.st_ino);
	printf("number of hardlink=%ld\n",s.st_nlink);
	printf("user id=%d\n",s.st_uid);
	printf("group id=%d\n",s.st_gid);
	printf("total size in bytes=%ld\n",s.st_size);
	printf("Block size of filesystem=%ld\n",s.st_blksize);
	printf("Number of block=%ld\n",s.st_blocks);
	printf("Last access time=%s",ctime(&(s.st_atim).tv_sec));
	printf("Last modified time=%s",ctime(&(s.st_mtim).tv_sec));
	printf("Last status change time=%s",ctime(&(s.st_ctim).tv_sec));
}
