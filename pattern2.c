#include<stdio.h>
void main()
{
  int i,n,j;
  printf("enter any no.");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  { 
	for(j=n;j>=i;j--)
	{   
		printf("%d \t",j);
	}
	printf("\n");
  
  }
}
