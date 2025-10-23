#include<stdio.h>
int main()
{
	int a[50],i,n,sum=0;
	printf("Enter the limit of numbers:");
	scanf("%d",&n);
	if(n<=50)
	{
		for(i=0;i<n;i++)
		{
			printf("Enter number:");
			scanf("%d",&a[i]);
		}
		for(i=0;i<n;i++)
		{
			sum=sum+a[i];
		}
		printf("The sum of entered number is:%d",sum);
	}
	else
	{
		printf("!ARRAY SIZE SHOULD BE LESS THAN 50!");
	}
	return 0;
}

