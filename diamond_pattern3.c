#include<stdio.h>
void main()
{
 int i,j,k,n,m=1,s=1,l=2;
 printf("enter any value");
 scanf("%d",&n);
 for(i=1;i<=((2*n)-1);i++)
 { 
	if(i<=n)
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
	else
	{     	
		s=(((2*n)-1)-l);
		 for(k=m;k<=i;k++)
                {
                        printf(" ");
                }
                 for(j=1;j<=s;j++)
                {
                        printf("*");
                }
		printf("\n");
		l=l+2;
		
	}

      
  }
 
}

