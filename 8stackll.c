#include<stdio.h>
#include<stdlib.h>
#define max_size 5
int counter=0;

struct stack
{
	int data;
	struct stack *link;
};
struct stack *TOP=NULL;
void push(int item)
{
	struct stack *newnode;
	newnode=(struct stack *)malloc(sizeof(struct stack));
	newnode->data=item;
	newnode->link=NULL;
	if(TOP==NULL)
	{
		TOP=newnode;
	}
	else
	{
		if(counter < max_size)
		{
			newnode->link=TOP;
			TOP=newnode;
			counter=counter+1;
		}
		else
			printf("stack is full");
	}

}
void pop(){
	struct stack *ptr;
	if(TOP==NULL)
	{
		printf(" Stack is empty");
	}
	else{
	ptr=TOP;
	TOP=TOP->link;
	free(ptr);
	}
}
void Display()
{
	struct stack *ptr;
	ptr=TOP;
	if(ptr == NULL)
		printf("stack is empty\n");
	else
	{
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	}
	printf("\n");
}

int main()
{
	push(10);
	push(20);
	Display();
	pop();
	Display();
	return(0);
}
