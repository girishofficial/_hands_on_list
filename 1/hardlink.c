/*
============================================================================
Name : 1b.c
Author : GIRISH KUMAR SAHU
Description : /*Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
Date: 16th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int argc, char* argv[]) 
{
	if(argc!=3){
	printf("Usage ./a.out sourcefile destination file\n");
	return 0;
	}
	
	if(link(argv[1],argv[2])==-1)
	{
	printf("can't Link\n");
	return 1;
	}else{
	printf("files have been linked");
	}
  return 0;
}

