#include<stdio.h>
#include<math.h>
void main()
{
	float p,r,t,c,ci;
	printf("\n enter the value");
	scanf("\n %f%f%f",&p,&r,&t);
	c=(1+(r/100));
	ci=p*pow(c,t);
	printf("\n %f",ci);
}
