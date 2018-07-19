#include<stdio.h>
void main()
{
	int i,a[10],n;
	printf("\n enter");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n enter element to be search");
	scanf("\n enter ur no.%d",&n);
	for(i=0;i<5;i++)
	{
		if(a[i] == n)
		{printf("\n found");}
		
	}

}
