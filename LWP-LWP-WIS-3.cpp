#include<stdio.h>
main()
{
	int i,o,s;
	for(o=5;o>=1;o--)
     {
     	for(s=1;s<=o;s++)
     	{
     		printf(" ");
		 }
       for(i=o;i<=5;i++)
       {
       	printf("%d",i);
	   }
	   printf("\n");
	 }
}
