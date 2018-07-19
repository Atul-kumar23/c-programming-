#include<stdio.h>
void main()
{
	int i,a[i],max;
	printf("\n enter an array");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
	}
	max=a[0];
	for(i=0;i<4;i++)
	{
		if(a[i]<a[i+1])
		max=a[i+1];
	}
	printf("\nmax value %d ",max);
}
