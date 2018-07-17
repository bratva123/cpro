/*

        *
       ***
      *****
     *******
    *********
   ***********
  *************
 ***************
*****************

*/

	#include<stdio.h>
	void main()
	{
		int i,j,n,s=1;
		printf("enter any no.");
		scanf("%d",&n);
		for(i=1;i<=n;i++)
		{
			for(j=1;j<=(n-i);j++)
			{
				printf(" ");
			}
			for(j=1;j<=s;j++)
			{
				printf("*");
			}
			printf("\n");
			s=s+2;
		}
	}	
