/*
============================================================================
Name : 8.c
Author : Girish Kumar Sahu
Description : Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.
Date: 17th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(){
    char buff[1024];
    int fd = open("file1.txt", O_RDONLY);

    while (read(fd,buff,1))
    {
        if(buff[0] == '\n')
            getchar();
        else
        printf("%c",buff[0]);
    }
    close(fd);
    
}

//Sample output
//hello
//line 1
//line 2