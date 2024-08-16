/*Girish Kumar Sahu*/
/*MT2024051*/

/*Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
b. hard link (link system call)
c. FIFO (mkfifo Library Function or mknod system call) */

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
