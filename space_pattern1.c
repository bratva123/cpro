#include<stdio.h>
int main()
{
 int i,j,k,n,count=1;
 printf("enter any no.");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
	for(k=1;k<=n-i;k++)
	{       
		printf(" ");
        	printf("\t");
        }	
	for(j=1;j<=i;j++)
	{       printf("\t");
		printf("*");
	}
	printf("\n");
        
 }
 return 0;
}
			
