/*
enter any no.5
55555
55515
55525
55535
55545
55555
*/

	#include<stdio.h>
	void main()
	{
		int i,j,k=1,n;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=(n+1);i++)
		{
			for(j=1;j<=(n-2);j++)
			{
				printf("%d",n);
			}
			if(i==n)
			printf("%d%d",n,n);
			else
			{
				printf("%d%d",k,n);
				k++;
			}
			printf("\n");
		}	
	}	 	
