/*Girish Kumar Sahu*/
/*MT2024051*/

/*Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data.

#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>*/

int main(){
	char chr[20];
	int file1,f;
	file1 = open("file1.txt",O_RDWR);
	read(file1,chr,10);
	f=lseek(file1,10,SEEK_CUR);
	/*printf("\nCurrent location of pointer is at %d",f);*/
	write(1,chr,10);
	read(file1,chr,10);
	write(1,chr,10);
}
