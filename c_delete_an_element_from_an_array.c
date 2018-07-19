#include<stdio.h>
void main()
{
	int i,j,a[10],n,num;
	printf("\n enter an array");
	scanf("\n%d",&num);
	for(i=1;i<=num;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n enter the no. which you want to delete");
	scanf("\n %d",&n);
	for(i=1;i<=num;i++)
	{
		if(n==a[i])
		{
			break;
		}
	}
	for(j=i;j<=num;j++)
	{
		a[j]=a[i+1];
	}
	for(i=1;i<num;i++)
	{
		printf("\n %d",a[i]);
	}
}
