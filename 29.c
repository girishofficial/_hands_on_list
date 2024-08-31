/*
============================================================================
Name : 29.c
Author : Girish Kumar Sahu
Description : Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
Date: 30th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <sched.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

void getSchedulingPolicy(pid_t pid) {
    int p = sched_getscheduler(pid);

    if (p == -1) {
        perror("Error getting scheduling policy");
        return;
    }

    switch (p) {
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER\n");
            break;
        default:
            printf("Unknown scheduling policy\n");
            break;
    }
}

void setSchedulingPolicy(pid_t pid, int newPolicy) {
    struct sched_param param;
    param.sched_priority = 1; // Set priority (1 is a valid priority for SCHED_FIFO and SCHED_RR)

    if (sched_setscheduler(pid, newPolicy, &param) == -1) {
        perror("Error setting scheduling policy");
    } else {
        printf("Scheduling policy changed successfully\n");
    }
}

int main() {
    pid_t pid = getpid(); // Get the current process ID

    printf("Getting current scheduling policy...\n");
    getSchedulingPolicy(pid);

    printf("Setting scheduling policy to SCHED_FIFO...\n");
    setSchedulingPolicy(pid, SCHED_FIFO);

    printf("Getting updated scheduling policy...\n");
    getSchedulingPolicy(pid);

    printf("Setting scheduling policy to SCHED_RR...\n");
    setSchedulingPolicy(pid, SCHED_RR);

    printf("Getting updated scheduling policy...\n");
    getSchedulingPolicy(pid);

    return 0;
}

/*Sample Output
Getting current scheduling policy...
Current scheduling policy: SCHED_OTHER
Setting scheduling policy to SCHED_FIFO...
Scheduling policy changed successfully
Getting updated scheduling policy...
Current scheduling policy: SCHED_FIFO
Setting scheduling policy to SCHED_RR...
Scheduling policy changed successfully
Getting updated scheduling policy...
Current scheduling policy: SCHED_RR
*/
