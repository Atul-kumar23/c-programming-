#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<stdlib.h>
#include<arpa/inet.h>
#define MAXBUF 256
int main()
{
	int sfd,cfd,slen,clen;
	char buf[MAXBUF];
	struct sockaddr_in saddr,caddr;
	sfd=socket(AF_INET,SOCK_STREAM,0);
	bzero(&saddr,sizeof(saddr));
	saddr.sin_family=AF_INET;
	saddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	saddr.sin_port=8779;
	slen=sizeof(saddr);
	if(bind(sfd,(struct sockaddr*)&saddr,slen)<0)
	{
		perror("not binded");
	}
	if(listen(sfd,2)<0)
	{
		perror("not listened");
	}
	clen=sizeof(caddr);
	cfd=accept(sfd,(struct sockaddr*)&caddr,&clen);
	if(cfd<0)
	{
		perror("not accepted");
	}
	int num1,num2,ans,choice,n;
	S:  n = write(cfd,"Enter Number 1 : ",strlen("Enter Number 1"));         //Ask for Number 1     
     	if (n < 0)
	 perror("ERROR writing to socket");
    	 read(cfd, &num1, sizeof(int));					//Read No 1
     	printf("Client - Number 1 is : %d\n" , num1);
          
          
     	n = write(cfd,"Enter Number 2 : ",strlen("Enter Number 2"));         //Ask for Number 2    
     	if (n < 0)
	 error("ERROR writing to socket");
     	read(cfd, &num2, sizeof(int));			
     	n = write(cfd,"Enter your choice : \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n",strlen("Enter your choice : \n1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.Exit\n"));       
if (n < 0) error("ERROR writing to socket");
     	read(cfd, &choice, sizeof(int));					//Read choice
     	printf("Client - Choice is : %d\n" , choice);
  	switch(choice)
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
     
     write(cfd , &ans , sizeof(int));
     if(choice != 5)
     	goto S;
    
   Q:  close(cfd);
     close(sfd);
     return 0; 
}
