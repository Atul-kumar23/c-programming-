#include<stdio.h>
void main()
{
	int a,b,c,sum;
	float avg,per;
	printf("\n enter the value of three student");
	scanf("%d %d %d",&a,&b,&c);
	sum=a+b+c;
	printf("\n sum=%d",sum);
	avg=sum/3;
	printf("\n avg=%f",avg);
	per=((sum*100)/300);
	printf("\n per=%f",per);
}
