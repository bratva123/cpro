/*
        1
       232
      34543
     4567654
    567898765

*/

	#include<stdio.h>
	void main()
	{
		int i,j,n,temp,k=0;
		printf("enter the no of rows");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");
			}
			for(j=i;j<=k+i;j++)
			{
				printf("%d",j);
				temp=j;
			}
			for(j=(--temp);j>=i;j--)
			{
				printf("%d",j);
			}
			k++;
			printf("\n");
		}
	}
