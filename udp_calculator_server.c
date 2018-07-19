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
int sfd,cfd,slen,k;
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
printf("waiting");
/*recvfrom(sfd,buf,sizeof(buf),0,(struct sockaddr*)&caddr,&slen);
puts(buf);*/
recvfrom(sfd,&num1,sizeof(int),0,(struct sockaddr*)&caddr,&slen);
printf("num1:%d\n",num1);
recvfrom(sfd,&num2,sizeof(int),0,(struct sockaddr*)&caddr,&slen);
printf("num2:%d\n",num2);
sendto(sfd,"1.for add ,2.sub\n,3.mult,4.div\n,5.exit",sizeof("1.for add ,2.sub,3.mult,4.div,5.exit"),0,(struct sockaddr*)&caddr,slen);

recvfrom(sfd,&ch,sizeof(int),0,(struct sockaddr*)&caddr,&slen);
printf("client choice %d",ch);
 switch(ch)
     {
     	case 1:
     		ans = num1 + num2;
     		break;
     	case 2:
     		ans = num1 -num2;
     		break;
     	case 3:
     		ans = num1*num2;
     		break;
     	case 4:
     		ans = num1/num2;
     		break;
     	case 5 :
 		goto Q;
     		break;
     }
sendto(sfd,&ans,sizeof(int),0,(struct sockaddr*)&caddr,slen);
printf("type message:\n");
/*gets(buf1);
sendto(sfd,buf1,sizeof(buf1),0,(struct sockaddr*)&caddr,slen);*/
}
Q:close(sfd);
return 0;
}
