//Girish Kumar Sahu
//MT2024051
/*23 aug 2024*/
/*16. Write a program to perform mandatory locking.
a. Implement write lock
b. Implement read lock*/
 


#include<stdio.h>
#include<unistd.h>
#include<sys/file.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<sys/types.h>
int main(void)
{struct flock lock;
int w,fd,rd,wr;
char buff[1024];
fd=open("file1",O_RDWR);
lock.l_type=F_RDLCK;
lock.l_whence=SEEK_SET;
lock.l_len=0;
lock.l_pid=getpid();
lock.l_start=0;
printf("before entering cs\n");
fcntl(fd,F_SETLKW,&lock);
printf("inside cs\n");
while(read (fd,buff,1))
{
        if(buff[0]=='\n')
        getchar();
        else 
         w= write(0,buff,1);



}

//rd=read(fd,buff,1);
//wr=write(0,buff,1);
printf("press enter to exit  cs\n");
getchar();
lock.l_type=F_UNLCK;
fcntl(fd,F_SETLK,&lock);
printf("exit cs\n");
}
