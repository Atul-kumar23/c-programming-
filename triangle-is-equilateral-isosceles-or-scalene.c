#include<stdio.h>
void main()
{
	int a,b,c;
	printf("\n enter the three size  ");
	scanf("\n %d%d%d",&a,&b,&c);
	if((a+b)>c && (b+c)>a && (c+a)>b)
	{
	
		if(a==b && b==c && c==a)
		{
			printf("\n equilateral triangle");
		}
		else if(a==b||b==c||c==a)
		{
			printf("\n isosceles ");
		}
		else if(a!=b&&b!=c&&c!=a)
		{
			printf("\n scalene");
		}
	}
	else
		printf("\n triangle not form");
}

