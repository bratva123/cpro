#include<stdio.h>
void main()
{
 int i,j,k,n,m=1,s=1,l=2,count=1,countt=1;
 printf("enter any value");
 scanf("%d",&n);
 for(i=1;i<=((2*n)-1);i++)
 {      count=1;
	countt=1;
        if(i<=n)
        {
                for(k=1;k<=n-m;k++)
                {	
                        printf("*");
			count++;
                }
                 for(j=1;j<=s;j++)
                {       
                        printf(" ");
                }
		for(k=1;k<count;k++)
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
                        printf("*");
			countt++;
                }
                 for(j=1;j<=s;j++)
                {
                        printf(" ");
                }
         	for(k=1;k<countt;k++)
		{
			printf("*");
		}
                printf("\n");
                l=l+2;

        }


  }


}
