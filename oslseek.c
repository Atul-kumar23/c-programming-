#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>
#include<sys/stat.h>
#include<stdlib.h>
char *buf1="abcdef";
char *buf2="ABCDEF";
int main(void)
{
	int fd;
	if((fd=creat("/home/linux-world/Desktop/abc.txt",O_APPEND))<0)
	printf("creat error");
	if(write(fd,buf1,10)!=10)
	printf("buf1 write error");
	if(lseek(fd,40,SEEK_SET)==-1)
	printf("lseak.error");
	if(write(fd,buf2,10)!=10)
	printf("buf2 write error");
	exit(0);
}

