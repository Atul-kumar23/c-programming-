#include<stdio.h>
void main()
{
	int a,b,sum; // a=first number, b=second number
	int *d,*e; // d=first number pointer,e=second number pointer
	printf("enter the value ");
	scanf("%d",&a);
	scanf("%d",&b);
	d=&a;
	e=&b;
	sum=*d + *e;
	printf("\n thw sum of two pointer: %d",sum);
}
