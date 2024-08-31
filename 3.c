/*
============================================================================
Name : 3.c
Author : Girish Kumar Sahu
Description : Write a program to create a file and print the file descriptor value. Use creat ( ) system call
Date: 28th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc , char * argv[]){

int fd =  creat("newfile1.txt",0744);

printf("File Descriptor value: %d\n",fd);

return 0;
}

//Sample output
//File Descriptor value : 3
