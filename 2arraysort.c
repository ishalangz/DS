#include<stdio.h>
void display_array(int a[],int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
void sort(int a[],int n)
{
int i,j,temp;
{
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}
}
void merge_array(int a[], int b[], int c[],int sz1,int sz2,int sz3)
{
int i,j;
	for(i=0;i<sz1;i++)
	{
		c[i]=a[i];
	}
	for(j=0;j<sz2;j++)
	{
		c[i]=b[j];
		i=i+1;
	}
}
int main()
{
	int a[10],b[10],c[20],n,i;
	printf("\nEnter the number of element in 1st array:");
	scanf("%d",&n);
	if(n<=10)
	{
		for(i=0;i<n;i++)
		{
			printf("Enter element %d in first array:",i);
			scanf("%d",&a[i]);
		}
	}
	else
	{
		printf("ARRAY CANNOT BE FORMED!");
	}
	display_array(a,n);
	printf("\nEnter the number of elements in 2nd array:");
	scanf("%d",&n);
	if(n<=10)
	{
	
		for(i=0;i<n;i++)
		{
			printf("Enter element %d  in second array:",i);
			scanf("%d",&b[i]);
		}
	}
	else
	{
		printf("ARRAY CANNOT BE FORMED!");
	}
	printf("elemnets of array 1 is:");
		display_array(b,n);
	sort(a,n);
	printf("\nsorted elements of 1 is:");
		display_array(a,n);
	sort(b,n);
	printf("\nsorted elements of 2 is:");
		display_array(b,n);
	merge_array(a,b,c,n,n,n+n);
	printf("\nsorted elements of merged array is:");
		display_array(c,n+n);
	return 0;
}
