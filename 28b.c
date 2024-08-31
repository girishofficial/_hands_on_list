/*
============================================================================
Name : 28b.c
Author : Girish Kumar Sahu
Description : Write a program to get maximum and minimum real time priority.
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <sched.h>

int main(){
	int policy = SCHED_RR;
	
	int max = sched_get_priority_max(policy);
	int min = sched_get_priority_min(policy);

	printf("max vala Priority: %d\n",max);
	printf("min vala Priority: %d\n",min);

	return 0;
}

/*Sample Output
max vala Priority: 99
min vala Priority: 1
*/
