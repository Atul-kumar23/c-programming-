#include<stdio.h>
void main()
{
	int i,a[10],min;
	printf("\n anter an array");
	for(i=0;i<5;i++)
	{
		scanf("\n %d",&a[i]);
		if(a[i]>a[i+1])
		min=a[i]>a[i+1];
	}
	printf("\n %d",min);
}
