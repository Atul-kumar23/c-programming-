#include<stdio.h>
void main()
{
	int n,r,c,sum=0;
	printf("\n enter the armstrong no.");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
		
	}
	if(n==sum)
	printf("\n no. is a armstrong");
	else
	printf("\n no. is not a armstrong");	
}
