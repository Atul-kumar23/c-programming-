#include<sys/types.h>
#include<sys/socket.h>
#include<sys/ipc.h>
#include<netinet/in.h>
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
	struct sockaddr_in saddr,caddr;
	bzero(&saddr,sizeof(saddr));
	sfd=socket(AF_INET,SOCK_STREAM,0);
	saddr.sin_family=AF_INET;
	saddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	saddr.sin_port=9001;
//	saddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	slen=sizeof(saddr);
	if(bind(sfd,(struct sockaddr*)&saddr,slen)<0);
	{
		perror("unable to bind");
		exit(1);
	}
	if(listen(sfd,2)<0)
	printf("not listen");
	clen=sizeof(caddr);
	if(cfd=accept(sfd,(struct sockaddr*)&caddr,&clen)<0);
	{
                perror("not accepted");
                exit(1);
        }
	for(;;)
	{
		bzero(buf,maxbuf);
		read(cfd,buf,maxbuf);
		puts(buf);
		printf("enter the meassage");
		gets(buf);
		write(cfd,buf,maxbuf);
	}
close(cfd);
close(sfd);
}
