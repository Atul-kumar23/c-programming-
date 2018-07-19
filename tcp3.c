#include<sys/ipc.h>
#include<sys/types.h>
#include<sys/socket.h>

#include<netinet/in.h>
#include<unistd.h>

#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#define MAXBUF 256;
int main()
{
	int cfd,clen,n;
	char sendline[MAXBUF],recvline[MAXBUF];
	struct sockaddr_in caddr;
	bzero(&caddr)
}
