#include<stdio.h>
main()
{
	int i,o,s;
	
	for(o=5;o>=1;o--)
	{
		for(s=4;s>=o;s--)
		{
			printf(" ");
		}
		for(i=o;i>=1;i--)
		{
			printf("*");
		}
		printf(" \n");
	}
}
