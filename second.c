#include<stdio.h>
void main()
{
	int i,a[10],max,n;
	printf("enter the size of array");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[1];
//	printf("%d",max);
	for(i=1;i<n;i++)
	{
		if(max<a[i+1])
		max=a[i+1];
	}
//	printf("%d",max);
	for(i=1;i<=n;i++)
	{
		if(max==a[i])
		a[i]=0;
	}
	max=a[1];
	for(i=1;i<n;i++)
	{
		if(max<a[i+1])	
		max=a[i+1];
	}
	printf("second largest no. = %d",max);
}
