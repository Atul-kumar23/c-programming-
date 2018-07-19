#include<stdio.h>
void main()
{
	int a,b,c,n;
	printf("\n enter the three angles");
	scanf("\n %d%d%d",&a,&b,&c);
	n=a+b+c;
	if(n==180)
	
		printf("\n valid");
	else
		printf("\n not valid");
}
