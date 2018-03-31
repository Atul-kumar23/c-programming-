#include<stdio.h>
//#include<conio.h>
#include<math.h>
void main()
{
	// p=principle r=rate t=time c=amount ci=compound interest
	float p,r,t,c,ci;
	printf("\n enter the value");
	scanf("\n %f%f%f",&p,&r,&t);
	c=(1+(r/100));
	ci=p*pow(c,t);
	printf("\n %f",ci);
}

