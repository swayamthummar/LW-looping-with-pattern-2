#include<stdio.h>
main()
{
	char i,o,s;
	for(o='A';o<='E';o++)
	{ 
	for(s=1;s>=o;s--)
     	{
     		printf(" ");
		 }
	 for(i='A';i<=o;i++)
	 {
	 	printf("%c",i);
	 }
	 printf("\n");
	}
}
