/*
============================================================================
Name : 17.c
Author : Girish Kumar Sahu
Description : Write a program to simulate online ticket reservation. Implement write lock
Write a program to open a file, store a ticket number and exit. Write a separate program, to
open the file, implement write lock, read the ticket number, increment the number and print
the new ticket number then close the file.
Date: 24th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>



int main(void) {
	int file_des;
	struct {
		int ticket_no;
	}db;
	db.ticket_no = 20;
	file_des = open("db", O_CREAT|O_RDWR, 0744);
	write(file_des, &db, sizeof(db));
	close(file_des);
	file_des = open("db", O_RDONLY);
	read(file_des, &db, sizeof(db));
	printf("ticket No: %d\n", db.ticket_no);
	close(file_des);
}

//Sample Output
//ticket No: 20