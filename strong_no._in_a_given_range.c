#include<stdio.h>
void main()
{
	int limit,n,i,sum=0,r,fact,num;
	//printf("\n enter no.");
	//scanf("%d",&limit);
	//num=limit;
	for(n=1;n<1000000;n++)
	{sum=0;
		limit=n;		
		while(limit>0)
		{
		r=limit%10;
		fact=1;
		for(i=r;i>=1;i--)
		{
			fact=fact*i;		
		}
		sum=sum + fact;
		limit=limit/10;
	//	printf("%d\n",sum);
		}
	//	printf("%d",sum);
		if(n==sum)
		printf("%d\n",n);
		
	}

/*	if(num==sum)
	printf("%dstrong\n",num);
	else
	printf("not strong no.");*/
	
}
