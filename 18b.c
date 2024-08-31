/*GIRISH KUMAR SAHU*/
/*MT2024051*/
//24th Aug 2024
/*18. Write a program to perform Record locking.
a. Implement write lock
b. Implement read lock
Create three records in a file. Whenever you access a particular record, first lock it then modify/access
to avoid race condition.*/


#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>

int main(){
	int fd,input;
	struct db{
		int train_num;
		int ticket_count;
	}db[3];
	fd = open("record.txt",O_RDWR);
		printf("Select train Number(1,2,3): \n");
		scanf("%d",&input);

		struct flock lock;
		lock.l_type=F_WRLCK;
		lock.l_start=(input-1)*sizeof(db);
		lock.l_len=sizeof(db);
		lock.l_pid=getpid();

		lseek(fd,(input-1)*sizeof(db),SEEK_SET);
		read(fd,&db,sizeof(db));
		printf("Before Entering into the critical section\n");

		fcntl(fd,F_SETLKW,&lock);
		printf("Ticket count : %d \n",db[input-1].ticket_count);
		db[input-1].ticket_count++;
		lseek(fd,-1*sizeof(db),SEEK_CUR);
		write(fd,&db,sizeof(db));
		printf("To book ticket, press Enter: \n");
		getchar();
		getchar();
		lock.l_type=F_UNLCK;
		fcntl(fd,F_SETLK,&lock);
		printf("Booked\n");
}
