#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/msg.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
	int qid,l;
	struct msgbuf
	{
		long mtype;
		char mtext[100];
	}
	msg1;
	qid=msgget((key_t)18,IPC_CREAT | 0666);
	if(qid==-1)
	{
		perror("message failed");
		exit(1);
	}
	if(msgrcv(qid,&msg1,sizeof(msg1),0,0)==-1)
	{
		printf("msg received");
		exit(1);
	}
	puts(msg1.mtext);
	return(0);
	}

	
