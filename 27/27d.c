//Girish Kumar Sahu
//MT2024051
//29th Aug 2024
/*27. Write a program to execute ls -Rl by the following system calls
a. execl
b. execlp
c. execled. execv
e. execvp*/

#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Executing 'ls -Rl' using execv...\n");
    char *args[] = { "ls", "-Rl", NULL };
    execv("/bin/ls", args);
    perror("execv error");
    return 1;
}

