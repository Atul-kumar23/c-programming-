#include<stdio.h>
void main()
{
	int j,i,a[10],n,flag=1,size;
	printf("\n enter the size of array ");
	scanf("\n %d",&size);
	for(i=0;i<size;i++)
	{
		scanf("\n %d",&a[i]);
	}
	printf("\n no which u want to delete");
	scanf("\n %d",&n);
	printf("\n after deleting %d fro array\n",n);
	for(i=0;i<size;i++)
	{
		if(n==a[i])
		{ flag=1;
		break;}

	}
 //       printf("%d",i);
        if(flag==1)
	{	for(int k=0,j=i;k<(size-1),j<size;j++,k++)
		{	
			a[j]=a[j+1];
        		printf("%d\t",a[k]);
        	 }
	}
        else
        printf("element not found");
}
