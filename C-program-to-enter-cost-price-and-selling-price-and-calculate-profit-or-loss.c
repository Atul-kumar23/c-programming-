#include<stdio.h>
void main()
{
	// sp=selling price,cp=cost price,p=profit,l=loss
	int sp,cp,p,l;
	printf("\n enter the selling price and cost price");
	scanf("\n %d%d",&sp,&cp);
	if(sp>cp)
		printf("\n profit %d",sp-cp);
	else
		printf("\n loss %d",cp-sp);
}
