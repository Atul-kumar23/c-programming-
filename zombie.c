#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{
	int pid=fork();
	if(pid==0)
	{
		
		printf("child id is %d and parent id is %d",getpid(),getppid());

	}
	else if(pid>0)
	{
 	sleep(10);
	printf("child id is %d and parent id is %d",getpid(),getppid());
	}
	return(0);
}
