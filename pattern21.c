/*

1       1
 2     2
  3   3
   4 4
    5
   4 4
  3   3
 2     2
1       1

*/
	#include<stdio.h>
	void main()
	{
		int i,j,n;
		printf("enter the no. of rows");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(i-1);j++)
			{
				printf(" ");
			}
			printf("%d",i);
			for(j=1;j<=(2*(n-i)-1);j++)
			{
				printf("-");
			}
			if(i != n)
			printf("%d",i);
			printf("\n");
		}
		for(i=n-1;i>=1;i--)
		{
			for(j=1;j<=(i-1);j++)
			{
				printf(" ");
			}
			printf("%d",i);
			for(j=1;j<=(2*(n-i)-1);j++)
			{
				printf("-");
			}
			if(i != n)
			printf("%d",i);
			printf("\n");
		}
	}
