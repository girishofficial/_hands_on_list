/*
============================================================================
Name : 1a.c
Author : Girish Kumar Sahu
Description : Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
Date: 16th Aug, 2024.
============================================================================
*/

#include<stdio.h>
#include<unistd.h>

int main(int argc, char* argv[]){

int softlink = symlink(argv[1],argv[2]);

if(softlink == -1){
perror("Cant link");
}else{
printf("Done");
}


}
