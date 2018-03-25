#include<stdio.h>
void main()
{
    float a,b,c;
	printf("\n enter the the value of a and b and c");
	scanf("\n %f %f %f",&a,&b,&c);
	if(a>b && a>c )
	printf("\n max %f",a);
		//else
	//	printf("\n max %d",c);
	else if(b>a && b>c)
	printf("\n max %f",b);
        else
        printf("\n max %f",c);

	
	
}
