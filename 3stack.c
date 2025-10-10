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
int main()
{
	push(10);
	push(20);
	push(30);
	push(40);
	display();
	pop();
	pop();
	display();
	
}
