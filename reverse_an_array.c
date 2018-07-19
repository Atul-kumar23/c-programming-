#include<stdio.h>
void main()
{
	int i,a[10],b[10],n;
	printf("\n enter an array");
	scanf("\n %d",&n);
	for(i=0;i<n;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n after reversing of an array");
	for(i=n-1;i>=0;i--)
	{
		b[n-i]=a[i];
		printf("\n reverse value%d",b[n-i]);
	}
}
