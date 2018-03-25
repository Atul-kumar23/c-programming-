#include<stdio.h>
void main()
{
	int fib,f=0,s=1,i,n;
	printf("\n enter the number");
	scanf("%d",&n);
	printf("%d %d",f,s);
	for(i=1;i<=n;i++)
	{
		fib=f+s;
		f=s;
		s=fib;
		printf(" %d ",fib);
		
	}	
	

}	


