/*

1        1
12      21
123    321
1234  4321
1234554321

*/
	#include<stdio.h>
	void main()
	{
		int i,j,n;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=i;j++)
			{
				printf("%d",j);
			}
			for(j=1;j<=2*(n-i);j++)
			{
				printf("-");
			}
			for(j=i;j>=1;j--)
			{
				printf("%d",j);
			}
			printf("\n");
		}
	}
