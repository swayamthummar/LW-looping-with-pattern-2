#include<stdio.h>
main()
{
	int i,o,s;
	for(o=1;o<=5;o++)
     {
       for(i=1;i<=o;i++)
       {
       		printf("%d",i);
        }
     
     	for(s=4;s>=o;s--)
     	{
     		printf("  ");
	    }
       for(i=o;i>=1;i--)
       {
       	printf("%d",i);
	   }
	   printf("\n");
	 }
}
