/*
    E
   D D
  C   C
 B     B
A       A

*/

	#include<stdio.h>
	void main()
	{
		int i,j,n,a=65;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");
			}		
			printf("%c",(a+n-i));
			for(j=1;j<=(2*(i-1))-1;j++)
			{
				printf(" ");
			}
			if(i != 1)
			printf("%c",(a+n-i));
			printf("\n");
		}
	}
