/*
============================================================================
Name : 20.c
Author : Girish Kumar Sahu
Description : Write a program to find out time taken to execute getpid system call. Use time stamp counter.
Date: 28th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>  
#include <stdint.h>  

uint64_t rdtsc() {
    unsigned int lo, hi;
    asm volatile ("rdtsc" : "=a" (lo), "=d" (hi));
    return ((uint64_t)hi << 32) | lo;
}

int main() {
    uint64_t s = rdtsc();

    pid_t pid = getpid();

    uint64_t e = rdtsc();

    uint64_t elapsed = e - s;

    printf("Time taken to execute getpid(): %lu clock cycles\n", elapsed);
    printf("Process ID: %d\n", pid);

    return 0;
}

//Sample Output
/*Time taken to execute getpid(): 10720 clock cycles
Process ID: 8565*/

