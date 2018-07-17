/*
5 5 5 5 5
5 4 4 4 4
5 4 3 3 3
5 4 3 2 2
5 4 3 2 1 n=5  */	
	#include<stdio.h>
	void main()
	{
		int i,j,k,n,temp;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{	
			k=n;
			for(j=1;j<=i;j++)
			{
				printf("%d   ",k);
				temp=k;
				k--;
			}		
			/*for(j=1;j<=(n-i);j++)
			{
				printf("%d",temp);
			}*/
			printf("\n");
		}	
	}
