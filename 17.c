#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main(){
	char *buff[10];
	struct flock lock;
	int fd = open("db.txt",O_CREAT | O_RDWR);
	int ticketcnt;
	printf("Enter a ticket number:");
	scanf("%d",&ticketcnt);
	lock.l_type = F_RDLCK;
	lock.l_whence = SEEK_SET;
	lock.l_start = 0;
	lock.l_len = 0;
	printf("Current ticket no is:%d\n", ticketcnt);
	printf("Enter to Unlock..\n");
	lock.l_pid=getpid();
	int n = read(0,buff, 10);
	fcntl(fd,F_SETLKW, &lock);
	write(fd, buff, ticketcnt);
	getchar();
	printf("unlocked\n");
	lock.l_type = F_UNLCK;
	fcntl(fd,F_SETLK,&lock);
	printf("finish\n");
}
