/*GIRISH KUMAR SAHU*/
/*MT2024051*/

/*Write a program to create a file and print the file descriptor value. Use creat ( ) system call*/


#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>

int main(int argc , char * argv[]){

int fd =  creat("newfile1.txt",0744);

printf("File Descriptor value: %d\n",fd);

return 0;
}
