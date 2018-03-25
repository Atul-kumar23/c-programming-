#include<stdio.h>
void main()
{
	char v;
	printf("\n enter the value:\n");
	scanf("%c",&v);
	if(v=='a'||v=='e'||v=='i'||v=='o'||v=='u'||v=='A'||v=='E'||v=='I'||v=='O'||v=='U')
	printf("\n vowel: %c",v);
	else
	printf("\n cosonent: %c",v);
}
