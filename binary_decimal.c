#include<stdio.h>
int power(int);
void main()
{
  int num,rem[10],choice,sum=0,count=0,n=1,i=1;
  printf("enter you choice   :  1.decimal to binary \t 2.binary to decimal\n");
  scanf("%d",&choice);                       //take choice from user
  switch(choice)
  {
	 case 1:printf("enter any decimal no.");
		scanf("%d",&num);           // num is decimal number which is to be converted into binary
		 while(num>0)
                {
                        rem[i]=num%2;      //store the remainder of num 
                        num=num/2;         //repeatedly change the value of num by result when num is divided by 2 
			i++;
                }
 		printf("%d",num);
		for(n=i-1;n>=1;n--)
		{
			printf("%d",rem[n]);  //print the store remaider from maximum index of rem array which is (i-1)
		}
    		break;

    	
	case 2:printf("enter any binary no.");
		scanf("%d",&num);
		while(num>0)
		{
			rem[i]=num%10;         //store the the result in array which is get by  modular division of num by                                                10
			num=num/10;          // repeatedly store the result of num which is get by division of num by 10
			sum=sum+((rem[i])*(power(count))); // this is the formula to conver binary to decimal where power                                                            is the function  which compute the power of 2.
			count++;
			i++;
		}
		printf("\n %d\n",sum);
		break;
  }
}
int power(int x)
{
	int pow=2,i;
        if(x==0)
	{ return 1;}
	else if(x==1)
	{ return 2;}
	else
	{	for(i=2;i<=x;i++)
		{
			pow=2*pow;
		}
	return pow;
	}
return 0;
}
	
