#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *link;
};
struct node *header=NULL;
/*struct createnode(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=10;
	newnode->link=NULL;
	
}*/
void insertAtFront(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{
		newnode->link=header;
		header=newnode;
	}
}
void insertAtEnd(int item)
{
	struct node *newnode;
	newnode=(struct node *)malloc(sizeof(struct node));
	newnode->data=item;
	newnode->link=NULL;
	if(header==NULL)
	{
		header=newnode;
	}
	else
	{ 
		struct node *ptr;
		ptr=header;
		while(ptr->link!=NULL)
		{
			ptr=ptr->link;
		}
		ptr->link=newnode;
	}
}
void insertAtAny(int item,int key)
{
	
	
		struct node *ptr,*ptr1;
		ptr=header;
		while(ptr->data!=key)
		{
			ptr1=ptr;
			ptr=ptr->link;
			
		}
		if(ptr->data==key)
		{
			struct node *newnode;
			newnode=(struct node *)malloc(sizeof(struct node));
			newnode->data=item;
			newnode->link=NULL;
			if(header==NULL)
			{
				header=newnode;
			}
			else
			{
				ptr1->link=newnode;
				newnode->link=ptr;
			}
		}
		
		else
		{
			printf("Key not found,insertion not possible");
		
		}
}
void deleteAtfront()
{
	struct node *ptr;
	if(header==NULL)
	{
		printf("the linked list is empty!");
	}
	else
	{
		ptr=header;
		header=header->link;
		free(ptr);
	}
}
void deleteAtend()
{
	struct node *ptr,*ptr1;
	if(header==NULL)
	{
		printf("the linked list is empty!");
	}
	else
	{
		ptr=header;
		ptr1=header;
		while(ptr->link!=NULL)
		{
			ptr1=ptr;
			ptr=ptr->link;
		}
		free(ptr);
		ptr1->link=NULL;
	}
}
void deleteAtany(int key)
{
	struct node *ptr,*ptr1;
	ptr=header;
	ptr1=NULL;
	while(ptr->data!=key)
	{
		ptr1=ptr;
		ptr=ptr->link;
	}
	if(ptr==NULL)
	{
		printf("key not found,deletion not possible");
	}
	else
	{
		printf("Deleted element is %d\n",ptr->data);
		if(ptr!=NULL)
		{
			ptr1->link=ptr->link;
		}
		else
		{
			header=ptr->link;
		}
		free(ptr);
	}
}
void traversalList()
{
	struct node *ptr;
	ptr=header;
	while(ptr!=NULL)
	{
		printf("%d",ptr->data);
		ptr=ptr->link;
	}
	printf("\n");
}
int main()
{
	int choice,item;
	insertAtFront(10);
	insertAtFront(20);
	insertAtFront(30);
	insertAtFront(40);
	traversalList();
	insertAtEnd(50);
	insertAtEnd(60);
	traversalList();
	traversalList();
	insertAtAny(70,20);
	traversalList();
	deleteAtfront();
	deleteAtend();
	traversalList();
	deleteAtany(70);
	traversalList();
	return(0);
} 
