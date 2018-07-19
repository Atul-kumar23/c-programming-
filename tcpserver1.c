#include<sys/types.h>
#include<sys/system.h>
#include<sys/ipc.h>
#include<arpa/inet.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#define maxbuf 256
int main()
{
	int sfd,slen,cfd,clen;
	char buf[maxbuf];
	struct sockaddr_in caddr,saddr;

}

