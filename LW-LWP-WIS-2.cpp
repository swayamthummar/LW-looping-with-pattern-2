#include<stdio.h>
main()
{
	int i,o,s;
	for(o=1;o<=5;o++)
     {
     	for(s=4;s>=o;s--)
     	{
     		printf(" ");
		 }
       for(i=o;i>=1;i--)
       {
       	printf("%d",i);
	   }
	   printf("\n");
	 }
}
