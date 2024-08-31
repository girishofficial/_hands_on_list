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
    printf("Executing 'ls -Rl' using execl...\n");
    execl("/bin/ls", "ls", "-Rl", NULL); 
    perror("execl mein error");
    return 1;
}

