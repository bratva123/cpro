/*
555555555
544444445
543333345
543222345
543212345  n=5
543222345
543333345
544444445
555555555

  */	
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
				printf("%d",k);
				temp=k;
				k--;
			}
			for(j=1;j<=(2*(n-i));j++)
			{
				printf("%d",temp);
			}
			for(j=1;j<i;j++)
			{
				printf("%d",++temp);
			}
			printf("\n");
		}
		for(i=n-1;i>=1;i--)
		{	
			k=n;
			for(j=1;j<=i;j++)
			{
				printf("%d",k);
				temp=k;
				k--;
			}
			for(j=1;j<=(2*(n-i));j++)
			{
				printf("%d",temp);
			}
			for(j=1;j<i;j++)
			{
				printf("%d",++temp);
			}
			printf("\n");
		}		
	}
