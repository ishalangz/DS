#include<stdio.h>
#include<ctype.h>
char uni_set[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
char set1[26],set2[26];
int bit_vect1[26],bit_vect2[26],result[26]; 
void initializeSet()
{
	for (int i=0;i<26;i++)
	{
		bit_vect1[i]=0;
		bit_vect2[i]=0;
		result[i]=0;
	}
}
void bitVector(char ary[26],int num1,int bit[26])
{
	int i,j;
	for(i=0;i<num1;i++)
	{
		for(j=0;j<26;j++)
		{
			char c=tolower(ary[i]);
			if(c==uni_set[j])
			{
				bit[j]=1;
			}
		}
	}
}
void setUnion(int bit1[26],int bit2[26])
{
	for(int i=0;i<26;i++)
	{
		result[i]=bit_vect1[i] | bit_vect2[26];
	}
}
void setIntersection(int bit1[26], int bit2[26])
{
	int i;
	for( i=0;i<26;i++)
	{
		result[i]=bit1[i]&bit2[26];
	}
}
void setComplement(int bit[26])
{
	int i;
	for(i=0;i<26;i++)
	{
		if(bit[i]==0)
		{
			result[i]=1;
		}
		else
		{
			result[i]=0;
		}
	}
}
void setDifference(int bit1[26],int bit2[26])
{
	setComplement(bit2);
	setIntersection(bit1,result);
}
int main()
{
	int num1,num2,i;
	initializeSet();
	printf("\nEnter the number of elemnts in set1:\n");
	scanf("%d",&num1);
	printf("Value of num1 is; %d", num1);
	//fflush(stdin);
	printf("\nnow enter the elements in first array:\n");
	for (i=0;i<num1;i++)
	{
		scanf("%c",&set1[i]);
	}
	//fflush(stdin);
	//fgets(set1, sizeof(set1), stdin);
	printf("\nEnter the number of elements in set2:\n");
	scanf("%d",&num2);
	printf("\nEnter the set2 elements:\n");
	
	for (i=0;i<num2;i++)
	{
		scanf("%c",&set2[i]);
	}
	return(0);
}	
