/*
                *
              **
            ***
          ****
        *****
      ******
    *******
  ********
*********         n=8
  ********
    *******
      ******
        *****
          ****
            ***
              **
                *
*/

	#include<stdio.h>
	void main()
	{
 		int i,j,n,k;
		printf("enter any no.");
		scanf("%d",&n);
		k=(2*n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				printf(" ");
			}		
			k=k-2;
			for(j=1;j<=i;j++)
			{
				printf("*");			
			}
			printf("\n");
		}
		for(i=1;i<=(n+1);i++)
		{
			printf("*");
		}
		printf("\n");
		k=2;
		for(i=(n-1);i>=1;i--)
		{
			for(j=1;j<=k;j++)
			{
				printf(" ");
			}		
			k=k+2;
			for(j=1;j<=i;j++)
			{
				printf("*");			
			}
			printf("\n");
		}
		
	}
