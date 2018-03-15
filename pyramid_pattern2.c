#include<stdio.h>
void main()
{
 int i,j,k,n,m=1,s=1;
 printf("enter any value");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {    	
	for(k=1;k<=n-m;k++)
	{    
		printf(" ");
	}
	for(j=1;j<=s;j++)
	{
		printf("*");
	}
	m=m+1;
	s=s+2;
	printf("\n");
  }
   printf("%d%d%d",s,m,i);
}	
