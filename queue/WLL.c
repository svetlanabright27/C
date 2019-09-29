//Queue using linked list
#include<stdio.h>
#include<malloc.h>
#include<conio.h>
#include"LL.h" // Including linked list definition


void enqueue(struct queue ** rear,struct queue ** front,int info)
{
	struct queue * ptr=NULL;
	ptr = (struct queue*) malloc(sizeof(struct queue));
	if(ptr == NULL )
	{
		printf("OVERFLOW!!!\a\n");
		exit(0);
	}
	ptr->data=info;
	ptr->next=NULL;

	if(*front==NULL)
	{
		*front=*rear=ptr;
		
	}
	else
	{
		(*rear)->next=ptr;
		*rear=ptr;
	}
	printf("Enqueue operation done.....");
}

void dequeue(struct queue ** front)
{
	if(*front==NULL)
	{
		printf("\nUNDERFLOW\a\n");
	}
	else
	{
		struct queue * ptr= NULL;
		ptr=*front;
		*front=(*front)->next;
		free(ptr);
		printf("Dequeue operation done...\n");
	}
}

void display_queue(struct queue * front)
{
	struct queue * ptr = front;
	while(ptr!=NULL)
	{
		printf("%d --> ",ptr->data);
		ptr=ptr->next;
	}
	printf("NULL\n");
}

int main()
{

	int choice_variable;
	int info;

	printf("Queue\n");
	label: printf("Menu\n");
	printf("1. Enqueue\n2. Dequeue\n3. View\n4. Exit\n");
	scanf("%d",&choice_variable);
	switch(choice_variable)
	{
		case 1:	printf("Enter info: "); scanf("%d",&info); enqueue(&rear,&front,info); break;
		case 2: dequeue(&front); break;
		case 3: display_queue(front); break;
		case 4: exit(0);
		default: printf("Don't enter wrong input\n");
	}
	getch();
	system("cls");
	goto label;

	return 0;
}