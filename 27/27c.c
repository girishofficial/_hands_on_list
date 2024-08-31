/*
============================================================================
Name : 27c.c
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
    printf("Executing 'ls -Rl' using execle...\n");
    char *envp[] = { NULL };
    execle("/bin/ls", "ls", "-Rl", NULL, envp);
    perror("execle error");
    return 1;
}

