/*
       * 
      * * 
     * * * 
    * * * * 
   * * * * * 
  * * * * * * 
 * * * * * * * 
* * * * * * * *  n=8
 * * * * * * * 
  * * * * * * 
   * * * * * 
    * * * * 
     * * * 
      * * 
       * 

*/

	#include<stdio.h>
	void main()
	{
  		int i,j,n;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");		
			}		
			for(j=1;j<=i;j++)
			{
				printf("*");
				if(j != i)
				printf(" ");		
			}
			printf("\n");
		}
		for(i=(n-1);i>=1;i--)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");		
			}		
			for(j=1;j<=i;j++)
			{
				printf("*");
				if(j != i)
				printf(" ");		
			}
			printf("\n");
		}
	}
