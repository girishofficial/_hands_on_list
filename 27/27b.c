/*
============================================================================
Name : 27b.c
Author : Girish Kumar Sahu
Description :Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execled. execv
e. execvp
Date: 29 Aug, 2024.
============================================================================
*/
#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Executing 'ls -Rl' using execlp...\n");
    execlp("ls", "ls", "-Rl", NULL); 
    perror("execlp error");
    return 1;
}

