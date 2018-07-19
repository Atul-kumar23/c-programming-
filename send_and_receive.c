#include<sys/types.h>
#include<sys/msg.h>
#include<sys/ipc.h>
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
	msg;
	qid=msgget((key_t) 18,IPC_CREAT | 0666);
	if(qid==-1)
	{
		perror("message failed");
		exit(1);
	}
	printf("send message:\n");
	gets(msg.mtext);
	l=strlen(msg.mtext);
	msg.mtype=1;
	if(msgsnd(qid,&msg,l,0)==1)
	{
		perror("\n message of student id");
		exit(1);
	}
	return(0);
}

