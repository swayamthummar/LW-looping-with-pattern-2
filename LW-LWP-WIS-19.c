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
       		if(i%2==0)
       		{
       			printf("0");
			   }
			   else
			   {
			   	printf("1");
			   }
	   }
	   printf("\n");
	 }
}
