
/*
             *
        *    *
    *   *    *
 *  *   *    *
************** pattern making,,,,,,,,,,,,
 *  *   *    *
    *   *    *
        *    *
             *

*/
	#include<stdio.h>
	void main()
	{ 
		int i,j,k,r,s,n;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=n;i>=1;i--)
		{	
			k=((i*(i+1))/2) + (i-1);
			if(i != n)
			{
				for(j=1;j<=k;j++)
				{
					printf(" ");
				}
				printf("*");
				for(j=1;j<=(n-i);j++)
				{
					for(r=(j+i);r>=1;r--)
					{
						printf(" ");
					}
					printf("*");
				}
				printf("\n");
			}
			else
			{	
				s=k;
				for(j=1;j<=k;j++)
				{
					printf(" ");
				}
				printf("*");
				printf("\n");	
			}
		}
		for(i=1;i<=(s+1);i++)
		{
			printf("*");
		}
		printf("\n");
		for(i=1;i<=n;i++)
		{	
			k=((i*(i+1))/2) + (i-1);
			if(i != n)
			{
				for(j=1;j<=k;j++)
				{
					printf(" ");
				}
				printf("*");
				for(j=1;j<=(n-i);j++)
				{
					for(r=(j+i);r>=1;r--)
					{
						printf(" ");
					}
					printf("*");
				}
				printf("\n");
			}
			else
			{	
				s=k;
				for(j=1;j<=k;j++)
				{
					printf(" ");
				}
				printf("*");
				printf("\n");	
			}
		}



	}  
