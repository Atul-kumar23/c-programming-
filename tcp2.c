#include<sys/types.h>
#include<sys/ipc.h>
#include<sys/socket.h>

#include<netinet/in.h>
#include<arpa/inet.h>
#include<unistd.h>

#include<string.h>
#include<stdlib.h>
#include<stdio.h>
#define MAXBUF 256
int main()
{
	int clen,cfd,sfd,slen;
	char buf[MAXBUF];
	struct sockaddr_in caddr,saddr;
	bzero(&saddr,sizeof(saddr));
	sfd=socket(AF_INET,SOCK_STREAM,0);
	saddr.sin_family=AF_INET;
	saddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	saddr.sin_port=9001;
	slen=sizeof(saddr);
	if(bind(sfd,(struct sockaddr*)&saddr,slen)<0);
	{
		perror("unable to bund");
		exit(1);
	}
	if(listen(sfd,2)<0)
	printf("not listen");
	clen=sizeof(caddr);
	if(cfd=accept(sfd,(struct sockaddr*)&caddr,&clen)<0)
	{
		perror("not accept");
		exit(1);
	}
	for(;;)
	{
		bzero(buf,MAXBUF);
		read(cfd,buf,MAXBUF);
		puts(buf);
		printf("enter the message");
		gets(buf);
		write(cfd,buf,MAXBUF);
	}
close(cfd);
close(sfd);
}


