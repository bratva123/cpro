/*
   *
  *A*
 *B*C*
*D*E*F*

*/

	#include<stdio.h>
	void main()
	{	
		int i,j,n,a=65;
		printf("enter the no. of rows");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");
			}
			for(j=1;j<=i;j++)
			{
				printf("*");
				if(j != i)
				{
					printf("%c",a);
					a++;
				}
			}
			printf("\n");
		}
	}
