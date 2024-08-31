//MT2024051
//Girish Kumar Sahu
//29th Aug 2024
/*Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).*/

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
