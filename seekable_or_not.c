#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
int main()
{
	if(lseek(STDIN_FILENO,0,SEEK_CUR)==-1)
	perror("cannot seek"),exit(1);
	else
	printf("seekable");
	return 0;
}
