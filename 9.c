#include<stdio.h>
#include<unistd.h>
#include<time.h>
#include<sys/stat.h>
#include<strings.h>

int main(int argc, char* argv[]){

	struct stat s;
	stat(argv[1], &s);
	printf("id of device=%ld\n",s.st_dev);
	printf("inode=%ld\n",s.st_ino);
	printf("file type and mode=%d\n",s.st_mode);
	printf("number of hardlink=%ld\n",s.st_nlink);
	printf("user id=%d\n",s.st_uid);
	printf("group id=%d\n",s.st_gid);
	printf("device id=%ld\n",s.st_rdev);
	printf("total size in bytes=%ld\n",s.st_size);
	printf("Block size of filesystem=%ld\n",s.st_blksize);
	printf("Number of block=%ld\n",s.st_blocks);
	printf("Last access time=%s",ctime(&(s.st_atim).tv_sec));
	printf("Last modified time=%s",ctime(&(s.st_mtim).tv_sec));
	printf("Last status change time=%s",ctime(&(s.st_ctim).tv_sec));
}
