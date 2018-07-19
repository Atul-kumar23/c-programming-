#include<unistd.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int childid;
	if((childid==fork())==-1)
	{
	printf("cannot fork");
	exit(1);

	}
	else if(childid==0)
	{
		printf("child,childpid=id,parent pid=%d\n",getpid(),getppid());
		exit(0);
	}
	
	else
	{
	printf("parent=child pid=%d,parent=%d\n",childid,getpid(1);
	exit(0);	
	}
return(0);
}
