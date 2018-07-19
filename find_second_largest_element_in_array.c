#include<stdio.h>
void main()
{
	int i,a[10],n,max1,max;
	printf("\n enter");
	scanf("\n %d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("\n %d",&a[i]);
	}
	max=a[1];
	for(i=1;i<=n;i++)
	{
		if(a[i]<a[i+1])
		max=a[i+1];		
	}
	for(i=1;i<=n;i++)
        {
                if(a[i]==max)
		a[i]=0;
	}
	for(i=1;i<=n;i++)
        {
                printf("\n %d\n",a[i]);
        }
/*	max=a[1];
	for(i=0;i<n;i++)
        {
	
                if(a[i]<a[i+1])
                max=a[i+1];
	}
	printf("\n second largest element of array  %d",max);
*/
}
