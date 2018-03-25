#include<stdio.h>
void main()
{
	int n,sum=0,i,m;
	printf("enter the value of n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&m);
		sum=sum+m;
	}
		printf("\n total sum %d",sum);
	

}
