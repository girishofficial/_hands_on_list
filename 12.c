/*Girish Kumar Sahu*/
/*MT2024051*/

/*Write a program to find out the opening mode of a file. Use fcntl.*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

int main()
{
int fd;
int enquire;


fd = open("file1.txt",O_RDONLY);

enquire = fcntl(fd,F_GETFL);

switch(enquire){
	case 32768 : printf("r\n"); break;
	case 32769 : printf("w\n"); break;
	case 33793 : printf("a\n"); break;
	case 32770 : printf("r+ || w+\n"); break;
	case 32794 : printf("a+\n"); break;
	}
return 0;

}
