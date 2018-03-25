#include<stdio.h>
void main()
{
	int i,n,fact;
	printf("\n enter the number");
	scanf("%d",&n);
	for(i=n-1;i>=1;i--)
	{
		fact=n*i;
		n=fact;}
		printf("\n the value of fact %d",fact);
	
}
