/*
12345
23455
34555 n=5
45555
55555
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
				printf("%d",j);
			}
			for(j=1;j<=i;j++)
			{
				printf("%d",n);
			}
			printf("\n");
		}
	}
