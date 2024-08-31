/*
============================================================================
Name : 6.c
Author : Girish Kumar Sahu
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls.
Date: 17th Aug, 2024.
============================================================================
*/

#include <unistd.h>

int main(){
	char b[30];
	int  n;
	n=read(0,b,30);/* 0 is for user input */
	write(1,b,n);/* 1 to print on the screen */

}

//sample output 
//hello World
//hello World
