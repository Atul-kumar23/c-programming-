#include<string.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<sys/ipc.h>
#include<stdlib.h>
#include<sys/types.h>
#include<netinet/in.h>
#include<stdlib.h>
#include<arpa/inet.h>
#include<sys/socket.h>
#define maxbuf 256
int main()
{
        int cfd,clen,n;
        char sendline[maxbuf],recvline[maxbuf];
        struct sockaddr_in caddr;
        bzero(&caddr,sizeof(caddr));
        cfd=socket(AF_INET,SOCK_STREAM,0);
        caddr.sin_family=AF_INET;
        caddr.sin_addr.s_addr=inet_addr("127.0.0.1");
        caddr.sin_port=9001;
	clen=sizeof(caddr);
	if(connect(cfd,(struct sockaddr*)&caddr,clen)<0)
	{
		perror("connect failed");
		exit(1);
	}
	for(;;)
	{
		bzero(sendline,maxbuf);
		bzero(recvline,maxbuf);
		gets(sendline,maxbuf);
		write(cfd,sendline,maxbuf);
		n=read(cfd,recvline,maxbuf);
		recvline[n]='\0';
		puts(recvline);
	}
	close(cfd);
	return 0;
}
