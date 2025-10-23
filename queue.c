#include<stdio.h>
#define max_sz 10
int front=-1,rear=-1,q[max_sz],item;
int enqueue(int item)
{
	if(rear>=max_sz)
	{
		printf("queue is full!");
	}
	else if(front==-1 && rear==-1)
	{
		front=0;
	}
		rear=rear+1;
		q[rear]=item;
}
int dequeue()
{
	if(front==-1 && rear==-1)
	{
		printf("queue is empty!");
	}
	else
	{
		front=front+1;
	}
}
void display()
{
	int i;
	printf("Queue elemnets are:\t");
	for(i=front;i<=rear;i++)
	{
		printf("%d\t",q[i]);
	}
}
int main()
{
	int c,item;
	do
	{
	printf("\nEnter a choice:\n1.enqueue\n2.dequeue\n3.display\n4.exit\n");
	scanf("%d",&c);
	switch(c)
	{
		case 1:printf("Enter the element:");
			scanf("%d",&item);
			enqueue(item);
			break;
		case 2:dequeue();
			break;
		case 3:display();
			break;
		case 4:break;
		default:printf("Enter the correct choice:");
	}
	}while(c!=4);
}
		
