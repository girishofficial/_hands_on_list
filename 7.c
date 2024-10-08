/*
============================================================================
Name : 7.c
Author : Girish Kumar Sahu
Description : Write a program to copy file1 into file2 ($cp file1 file2).
Date: 17th Aug, 2024.
============================================================================
*/


#include <stdio.h>

int main(int argc, char* argv[]){
	FILE *fp1,*fp2;
	fp1 = fopen(argv[1],"r");
	fp2 = fopen(argv[2],"w");

	if(!fp1||!fp2 ||argc != 3){
		printf("error");
	}
	char c;
	while((c = fgetc(fp1)) != EOF ){
		fputc(c,fp2);
	}
	fclose(fp1);
	fclose(fp2);

}

