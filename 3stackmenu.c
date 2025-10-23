#include<stdio.h>
#define max_sz 10
int s[max_sz],top=-1;
void push(int item)
{
	if(top>=max_sz)
	{
		printf("stack is full:");
	}
	else
	{
		top=top+1;
		s[top]=item;
	}
}
void pop()
{
	if(top<0)
	{
		printf("stack is empty!");
	}
	else
	{
		printf("\npoped element is %d",s[top]);
		top-=1;
	}
}
void display()
{ 
	int i;
	printf("\nstack elements are:");
	for(i=top;i>-1;i--)
	{
		printf("%d\t",s[i]);	
	}
}
void main()
{
	int c,item;
	do
	{
		printf("\n1.push\n2.pop\n3.display\n4.exit\n");
		printf("Enter your choice:");
		scanf("%d",&c);
		switch(c)
		{
			case 1:printf("Enter the element:");
				scanf("%d",&item);
				push(item);
				break;
			case 2:pop();
				break;
			case 3:display();
				break;
			case 4:break;
			default:printf("Enter the correct choice:");
		}
	}while(c!=4);	
}	
