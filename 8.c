/*GIRISH KUMAR SAHU*/
/*MT2024051*/

/*Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached.*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	FILE *file;
	file = fopen(argv[1],"r");
	if(file != NULL){
	
		char ch;
		while((ch=fgetc(file)) != EOF){
			putchar(ch);
		}
	fclose(file);
	}
	else{
	printf("file error");
	}




}
