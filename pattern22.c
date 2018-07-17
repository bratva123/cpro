/*
********1********
*******2*2*******
******3*3*3******
*****4*4*4*4*****
****5*5*5*5*5****
***6*6*6*6*6*6***
**7*7*7*7*7*7*7**

*/

	#include<stdio.h>
	void main()
	{
		int i,j,n,k;
		printf("enter any no below ten");
		scanf("%d",&n);
		k=2*n;
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=k;j++)
			{
				printf("*");
			}
			for(j=1;j<=i;j++)
			{
				printf("%d",i);
				printf("*");
			}
			for(j=1;j<k;j++)
			{
				printf("*");
			}
			printf("\n");
			k--;
		}
	}
