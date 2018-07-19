#include<stdio.h>
#include<unistd.h>
#include<string.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<sys/types.h>
#include<stdlib.h>
#define MAXBUF 256
int main()
{
	int cfd,clen,n;
	char sendline[MAXBUF],recvline[MAXBUF];
	struct sockaddr_in caddr;
	cfd=socket(AF_INET,SOCK_STREAM,0);
	bzero(&caddr,sizeof(caddr));
	caddr.sin_family=AF_INET;
	caddr.sin_addr.s_addr=inet_addr("127.0.0.1");
	caddr.sin_port=8779;
	clen=sizeof(caddr);
	connect(cfd,(struct sockaddr*)&caddr,clen);
/*while(1)
{
bzero(sendline,MAXBUF);
bzero(recvline,MAXBUF);
//read(cfd,sendline,MAXBUF);
//puts(sendline);
gets(sendline);
write(cfd,sendline,MAXBUF);
n=read(cfd,recvline,MAXBUF);
recvline[n]='\0';
puts(recvline);
}*/
 	int num1 ;
    int num2 ;
    int ans;
    int choice;
    
    
    
  S:bzero(sendline,MAXBUF);						
    n = read(cfd,sendline,MAXBUF-1);				//Read Server String
    if (n < 0) 
         error("ERROR reading from socket");
    printf("Server - %s\n",sendline);
    scanf("%d" , &num1);						//Enter No 1
    write(cfd, &num1, sizeof(int));     			//Send No 1 to Server
	
	
	
    bzero(sendline,MAXBUF);						
    n = read(cfd,sendline,MAXBUF-1);				//Read Server String
    if (n < 0) 
         error("ERROR reading from socket");
    printf("Server - %s\n",sendline);
    scanf("%d" , &num2);						//Enter No 2
    write(cfd, &num2, sizeof(int));     			//Send No 2 to Server
	
	
    	
    bzero(sendline,MAXBUF);						
    n = read(cfd,sendline,MAXBUF-1);				//Read Server String
    if (n < 0) 
         error("ERROR reading from socket");
    printf("Server - %s",sendline);
    scanf("%d" , &choice);						//Enter choice
    write(cfd, &choice, sizeof(int));     			//Send choice to Server

	if (choice == 5)
	goto Q;

    read(cfd , &ans , sizeof(int));				//Read Answer from Server
    printf("Server - The answer is : %d\n" , ans);		//Get Answer from server
	
    if(choice != 5)
    	goto S;
    	
Q:  printf("You chose to exit, Thank You so much.");
     	
       
close(cfd);
return 0;
}

