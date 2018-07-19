#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<unistd.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<arpa/inet.h>
#define MAXBUF 256
int main()
{
int sfd,slen;
char buf[MAXBUF],buf1[MAXBUF];
struct sockaddr_in saddr,caddr;
sfd=socket(AF_INET,SOCK_DGRAM,0);
bzero(&saddr,sizeof(saddr));
saddr.sin_family=AF_INET;
saddr.sin_addr.s_addr=inet_addr("127.0.0.1");
saddr.sin_port=6849;
slen=sizeof(saddr);
if(bind(sfd,(struct sockaddr*)&saddr,slen)<0)
	perror("not binded");
while(1)
{int num1,num2,ch,ans;
/*printf("enter message");
gets(buf);
sendto(sfd,buf,sizeof(buf),0,(struct sockaddr*)&saddr,slen);*/
printf("enter number1\n");
scanf("%d",&num1);
sendto(sfd,&num1,sizeof(int),0,(struct sockaddr*)&saddr,slen);

printf("enter number2\n");
scanf("%d",&num2);
sendto(sfd,&num2,sizeof(int),0,(struct sockaddr*)&saddr,slen);

recvfrom(sfd,buf,sizeof(buf),0,(struct sockaddr*)&saddr,&slen);
printf("message server:%s",buf);


printf("enter number ch\n");
scanf("%d",&ch);
sendto(sfd,&ch,sizeof(int),0,(struct sockaddr*)&saddr,slen);
if(ch>4)
	goto Q;
/*recvfrom(sfd,buf1,sizeof(buf1),0,(struct sockaddr*)&saddr,&slen);
printf("message server:%s",buf1);*/

recvfrom(sfd,&ans,sizeof(int),0,(struct sockaddr*)&saddr,&slen);
printf("message server:%d",ans);

}
Q:close(sfd);
return 0;
}
