#include<stdio.h>
void main()
{
	int p=0,q=0,i,n;
	printf("\n enter the no");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	{

		if(n%10)
			printf("\n no. is a palindrome");
		else
			printf("\n no. is not palindrome");
	}
}
