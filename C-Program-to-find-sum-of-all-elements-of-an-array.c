#include<stdio.h>
void main()
{
	int i,a[5],sum=0;
	printf("\n enter an array");
	for(i=0;i<5;i++)
	{

		scanf("\n %d",&a[i]);
		sum=sum+a[i];
	}
	printf("\n %d",sum);
}

