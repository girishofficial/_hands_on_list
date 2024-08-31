/*
============================================================================
Name : 27e.c
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
    printf("Executing 'ls -Rl' using execvp...\n");
    char *args[] = { "ls", "-Rl", NULL };
    execvp("ls", args);
    perror("execvp error");
    return 1;
}

