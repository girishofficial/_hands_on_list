/*
============================================================================
Name : 5.c
Author : Girish Kumar Sahu
Description : Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd
Date: 16th Aug, 2024.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>

int main(){
	int fd1 = creat("file1.txt", O_RDWR);
	int fd2 = creat("file2.txt", O_RDWR);
	int fd3 = creat("file3.txt", O_RDWR);
	int fd4 = creat("file4.txt", O_RDWR);
	int fd5 = creat("file5.txt", O_RDWR);

	while(1);
}

/*use & while running then do cd /proc/pid/fd and then  ls -l*/
//Sample Output 
/*lrwx------ 1 girish-pc girish-pc 64 Aug 31 22:08 0 -> /dev/pts/1
lrwx------ 1 girish-pc girish-pc 64 Aug 31 22:08 1 -> /dev/pts/1
lrwx------ 1 girish-pc girish-pc 64 Aug 31 22:08 2 -> /dev/pts/1
l-wx------ 1 girish-pc girish-pc 64 Aug 31 22:08 3 -> /home/girish-pc/hands_on/file1.txt
l-wx------ 1 girish-pc girish-pc 64 Aug 31 22:08 4 -> /home/girish-pc/hands_on/file2.txt
l-wx------ 1 girish-pc girish-pc 64 Aug 31 22:08 5 -> /home/girish-pc/hands_on/file3.txt
l-wx------ 1 girish-pc girish-pc 64 Aug 31 22:08 6 -> /home/girish-pc/hands_on/file4.txt
l-wx------ 1 girish-pc girish-pc 64 Aug 31 22:08 7 -> /home/girish-pc/hands_on/file5.txt
*/

