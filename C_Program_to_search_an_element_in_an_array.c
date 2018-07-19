#include<stdio.h>
void main()
{
	int i,a[i],n,flag=0;
	printf("\n enter an array");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n enter the value which u want to search");
	scanf("\n %d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i]==n)
		{
			flag=1;
			break;
		}
	
	}
	if(flag==1)
	printf("\n found at %d position",(i+1));
	else
	printf("\n not found");
}
