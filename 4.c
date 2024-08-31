/*
============================================================================
Name : 4.c
Author : Girish Kumar Sahu
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 16th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <errno.h>

int main() {
    int fd;

    fd = open("my_file.txt", O_CREAT | O_EXCL | O_WRONLY, 0644);
    perror("fd: ");

    close(fd);
    return 0;
}

//Sample output
//fd : successful
