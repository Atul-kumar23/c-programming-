#include<stdio.h>
void main()
{
	int a,b,c;//a=first number b=second number c=total
	printf("enter the number of a and b\t");
	scanf("%d%d",&a,&b);
	c=a+b;
	printf("addition of two no%d\n",c);
	c=a-b;
	printf("subtraction of two no%d\n",c);
	c=a*b;
	printf("multiplication of two number%d\n",c);
	c=a/b;
	printf("divison of two number%d\n",c);
	c=a%b;
	printf("modular divison of two number%d\n",c);

}
