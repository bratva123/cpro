/*

  9 	8 	7 	6 	5 	4 	3 	2 	1 	
  9 	8 	7 	6 	5 	4 	3 	2 	
  9 	8 	7 	6 	5 	4 	3 	
  9 	8 	7 	6 	5 	4 	
  9  	8 	7 	6 	5 	
  9 	8 	7 	6 	
  9 	8 	7 	
  9 	8 	
  9                                                                     */


	#include<stdio.h>
	void main()
	{
  		int i,j,n;
		printf("enter  any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=n;j>=i;j--)
			{
				printf("%d\t",j);
			}
			printf("\n");
		}
	}
